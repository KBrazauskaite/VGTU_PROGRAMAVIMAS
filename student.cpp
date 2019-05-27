#include "student.h"
#include "calculations.h"
#include "random.h"
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iostream>

std::vector<Student> generate_students( const unsigned n ) {
    std::vector<Student> students;
    Student s;

    for ( std::vector<Student>::size_type i = 0; n != i; ++i ) {
        s.name          = "Name" + std::to_string( i + 1 );
        s.surname       = "Surname" + std::to_string( i + 1 );
        s.examScore     = std::rand() % 10 + 1;
        calculate_med_avg( s, generate_random_grades( 5 ) );
        s.finalScore    = 0.6 * s.average + 0.4 * s.examScore;

        students.push_back( s );
    }

    return students;
}

const std::vector<Student> categorize_students( std::vector<Student> &students ) {
    const auto rem = std::partition( students.begin(), students.end(),
                                     []( Student &student ) {
        return student.finalScore >= 5.0;
    } );

    const std::vector<Student> failed( rem, students.end() );
    students.erase( rem, students.cend() );

    return failed;
}