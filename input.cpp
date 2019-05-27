#include "input.h"
#include "student.h"
#include "calculations.h"
#include "random.h"
#include <iostream>
#include <fstream>
#include <string>
#include <exception>

void get_input( std::string &input, const std::string &repeat ) {
    std::cin.clear();
    std::cerr << "Incorrect input." << std::endl;
    std::cout << repeat << ": ";
    std::getline( std::cin, input );
}

void retrieve_text_input( std::string &input, const std::string &repeat ) {
    std::cin.clear();
    std::getline( std::cin, input );

    while ( input.size() < 2 || ( input[ 0 ] < 65 || input[ 0 ] > 90 ) ||
            input.substr( 1 ).find_first_not_of( "abcdefghijklmnopqrstuvwxyz" ) != std::string::npos ) {
        get_input( input, repeat );
    }
}

unsigned read_number( const std::string &repeat ) {
    std::string g;
    unsigned k = 0;

    std::cout << repeat << ": ";
    std::getline( std::cin, g );

    if ( !std::cin.eof() ) {
        while ( g.empty() || g.find_first_not_of( "0123456789" ) != std::string::npos ||
            ( ( k = std::stoul( g ) ) < 1 || k > 10 ) ) {
            get_input( g, repeat );
        }
    }

    return k;
}

void read_from_file( std::vector<Student> &students ) {
    try {
        std::ifstream in( "kursiokai.txt" );
        in.exceptions( std::ifstream::failbit );

        std::string line;
        std::getline( in, line );

        Student s;

        while ( !in.eof() ) {
            in >> s.name >> s.surname;

            std::deque<unsigned> grades;
            unsigned k;

            for ( size_t i = 0; 5 != i; ++i ) {
                grades.push_back( ( in >> k, k ) );
            }

            in >> s.examScore;
            calculate_med_avg( s, grades );
            students.push_back( s );
        }

        in.close();
    } catch ( const std::ios_base::failure &e ) {
        std::cerr << "Unable to open file. Error: " << e.what() << std::endl;
        std::terminate();
    } catch ( const std::overflow_error &e ) {
        std::cerr << "Overflow error: " << e.what() << std::endl;
        std::terminate();
    }
}

void read_from_user( std::vector<Student> &students ) {
    Student s;
    char ans;

    do {
        std::cout << "Name: ";
        retrieve_text_input( s.name, "Name" );

        std::cout << "Surname: ";
        retrieve_text_input( s.surname, "Surname" );

        std::cout << "Generate grades randomly (Y/N): ";
        std::cin >> ans;
        std::cin.ignore();

        std::deque<unsigned> grades;
        unsigned k;

        if ( ans == 'Y' || ans == 'y' ) {
            generate_random_grades( grades, read_number( "Homework grade count" ), true );
        } else {
            std::cout << "Press CTRL + Z to terminate input." << std::endl;

            while ( !std::cin.eof() ) {
                k = read_number( "Homework grade" );

                if ( !std::cin.eof() ) {
                    grades.push_back( k );
                }
            }
        }

        try {
            calculate_med_avg( s, grades );
        } catch ( const std::overflow_error &e ) {
            std::cerr << "Overflow error: " << e.what() << std::endl;
            std::terminate();
        }

        std::cin.clear();
        s.examScore     = read_number( "Exam grade" );
        s.finalScore    = 0.6 * s.average + 0.4 * s.examScore;
        students.push_back( s );

        std::cout << "Add another student (Y/N): ";
        std::cin >> ans;
        std::cin.ignore();
    } while ( !std::cin.eof() && ( ans == 'y' || ans == 'Y' ) );
}

void read_data( std::deque<Student> &students ) {
    char ans;

    std::cout << "Read from file (Y/N): ";
    std::cin >> ans;
    std::cin.ignore();

    if ( ans == 'y' || ans == 'Y' ) {
        read_from_file( students );
    } else {
        read_from_user( students );
    }
}
