#include "calculations.h"
#include "student.h"
#include <vector>
#include <exception>

using std::list;
using std::deque;

void calculate_med_avg( Student &s, const std::vector<unsigned> &pazymiai ) {
    if ( !pazymiai.size() ) {
        throw std::overflow_error( "division by zero" );
    }

    unsigned sum = 0;

    for ( std::deque<unsigned>::size_type i = 0, n = pazymiai.size(); n != i; ++i ) {
        if ( n % 2 && i == ( n / 2 ) ) {
            s.med =pazymiai[ i ];
        } else if ( !( n % 2 ) && ( i == ( n / 2 ) || i == ( n / 2 + 1 ) ) ) {
            s.med += pazymiai[ i ];
        }

        sum+=pazymiai[ i ];
    }

    s.med=(pazymiai.size() % 2 ) ? s.med : s.med / 2;
    s.average = sum / pazymiai.size();
}
