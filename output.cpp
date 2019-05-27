#include "output.h"
#include "student.h"
#include <iostream>
#include <vector>
#include <iomanip>

using std::list;
using std::deque;
using std::search;
using std::copy;
using std::remove_copy;

void write_data( std::ostream &out, const std::list<Student> &students ) {
    out << std::setw( 16 ) << std::left << "Name" << std::setw( 16 ) << "Surname"
        << std::setw( 17 ) << "Final (Avg.)" << "Final (Med.)" << std::endl;
    out << std::string( 61, '-' ) << std::endl;
    out << std::fixed << std::setprecision( 2 );

    for ( const auto &s : students ) {
        out << std::left << std::setw( 16 ) << s.name << std::setw( 15 ) << s.surname
            << std::setw( 13 ) << std::right << s.finalScore
            << std::setw( 17 ) << ( 0.6 * s.median + 0.4 * s.examScore ) << std::endl;
    }
}
