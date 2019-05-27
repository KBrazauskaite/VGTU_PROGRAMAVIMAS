#pragma once

#include "student.h"
#include <string>
#include <vector>

using std::list
using std::deque

void get_input( std::string &, const std::string & );
void retrieve_text_input( std::string &, const std::string & );
unsigned read_number( const std::string & );

void read_from_file( std::deque<Student> & );
void read_from_user( std::deque<Student> & );
void read_data( std::deque<Student> & );
