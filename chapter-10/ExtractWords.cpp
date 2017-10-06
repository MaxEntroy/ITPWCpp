/* Convert.cpp
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

std::string double_to_string( double val );
double string_to_double( std::string s );


int main( void )
{
	const double PI = 4*std::atan(1.0);
	std::string s = double_to_string(PI);
	std::cout << s << std::endl;

	double val = string_to_double( s );
	std::cout << val << std::endl;

	return 0;
}

std::string double_to_string( double val )
{
	std::stringstream ss;
	ss << val;
	return ss.str(); // returns a string object with a copy of the current contents of the stream
}
double string_to_double( std::string s )
{
	std::stringstream ss;
	double ret = 0.0;

	ss << s;
	ss >> ret;
	return ret;
}
*/

/*
ExtractWords.cpp
*/
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> extract_words( const std::string& line );

int main( void )
{
	std::string line;
	std::cout << "Please enter a line: ";
	std::getline( std::cin, line );
	std::vector<std::string> words = extract_words( line );

	typedef std::vector<std::string>::const_iterator const_iter;
	const_iter b = words.begin();
	const_iter e = words.end();
	while( b != e )
	{
		std::cout << *b << std::endl;
		++b;
	}

	return 0;
}

std::vector<std::string> extract_words( const std::string& line )
{
	std::stringstream ss(line);
	std::vector<std::string> ret;

	while( !ss.eof() )
	{
		std::string s;
		ss >> s;
		ret.push_back(s);
	}

	return ret;
}