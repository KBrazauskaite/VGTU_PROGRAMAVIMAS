#pragma once

#include <string>
#include <vector>

using std::list;
using std::deque;

struct Student {
    std::string name;
    std::string surname;
    unsigned examScore  = 0;
    double average      = 0;
    double median       = 0;
    double finalScore   = 0;
};

std::list<Student> generate_students( const unsigned );
const std::list<Student> categorize_students( std::list<Student> & );
