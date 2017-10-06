#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#define MAX_LEN 64

class Student
{
private:
	
	char name_[MAX_LEN];
	int score_;

public:

	Student() : score_(0) 
	{
		std::memset( name_, 0, sizeof(name_) );
	}
	Student( const std::string& name, int score ) : score_(score) 
	{
		std::strncpy( name_, name.c_str(), MAX_LEN );
	}

	int show() const ;

	void set_name( std::string n ) 
	{
		std::strncpy( name_, n.c_str(), MAX_LEN );
	}
	void set_score( int s ) { score_ = s; }
};

#endif