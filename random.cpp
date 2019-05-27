#include "random.h"
#include "student.h"
#include <vector>
#include <iostream>
#include <cstdlib>

using std::list;
using std::deque;
using std::search;
using std::copy;
using std::remove_copy;


void generate_random_grades( std::vector<unsigned> &grades, unsigned n, bool show_grades ) {
    unsigned k;

    while ( n-- ) {
        grades.push_back( ( k = std::rand() % 10 + 1 ) );

        if ( show_grades ) {
            std::cout << "Random grade: " << k << std::endl;
        }
    }
}

std::vector<unsigned> generate_random_grades( unsigned n ) {
    std::vector<unsigned> vec;
    generate_random_grades( vec, n, false );

    return vec;
}
