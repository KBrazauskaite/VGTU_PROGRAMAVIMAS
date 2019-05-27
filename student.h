#pragma once

#include <string>
#include <vector>

struct Student {
    std::string name;
    std::string surname;
    unsigned examScore  = 0;
    double average      = 0;
    double median       = 0;
    double finalScore   = 0;
};

std::vector<Student> generate_students( const unsigned );
const std::vector<Student> categorize_students( std::vector<Student> & );