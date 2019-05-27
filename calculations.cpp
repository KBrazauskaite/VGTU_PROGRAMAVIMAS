#include "calculations.h"
#include "student.h"
#include <vector>
#include <exception>

using std::list;
using std::deque;

void calculate_med_avg( Student &s, const std::vector<unsigned> &grades ) {
    if ( !grades.size() ) {
        throw std::overflow_error( "division by zero" );
    }

    unsigned sum = 0;

    for ( std::deque<unsigned>::size_type i = 0, n = grades.size(); n != i; ++i ) {
        if ( n % 2 && i == ( n / 2 ) ) {
            s.median = grades[ i ];
        } else if ( !( n % 2 ) && ( i == ( n / 2 ) || i == ( n / 2 + 1 ) ) ) {
            s.median += grades[ i ];
        }

        sum += grades[ i ];
    }

    s.median = ( grades.size() % 2 ) ? s.median : s.median / 2;
    s.average = sum / grades.size();
}
