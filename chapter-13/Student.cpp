#include "Student.h"
#include <iostream>

int Student::show() const
{
	std::cout << this->name_ << " " << this->score_ << std::endl;
	return 0;
}