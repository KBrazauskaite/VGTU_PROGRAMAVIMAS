#pragma once

#include "student.h"
#include <string>
#include <vector>

void get_input( std::string &, const std::string & );
void retrieve_text_input( std::string &, const std::string & );
unsigned read_number( const std::string & );

void read_from_file( std::vector<Student> & );
void read_from_user( std::vector<Student> & );
void read_data( std::vector<Student> & );