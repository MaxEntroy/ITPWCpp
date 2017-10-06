#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

bool is_alpha(char c)
{
	return isalpha(c);
}
bool is_comma( char c)
{
	return static_cast<bool>( c==',');
}

int resolve_line( std::vector< std::string >& ret, std::string line );
int resolve_line1( std::vector< std::string >& ret, std::string line );

int main( void )
{
	std::ifstream fin;
	fin.open( "state.txt" );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file" << std::endl;
		return -1;
	}

	std::vector< std::string > ret;
	std::string line;
	while( std::getline( fin, line ) )
	{
		resolve_line1( ret, line );
	}
	fin.close();

	unsigned sz = ret.size();
	for( unsigned i = 0; i < sz; ++i )
	{
		std::cout << ret[i] << std::endl;
	}

	return 0;
}
int resolve_line( std::vector< std::string >& ret, std::string line )
{
	if( line == "" )
		return -1;

	typedef std::string::const_iterator const_iter;
	const_iter b = line.begin();
	const_iter e = line.end();

	while( b != e )
	{
		// find begin
		b = std::find_if( b, e, is_alpha );
		if( b != e )
		{
			// find after
			const_iter after = find_if( b, e, is_comma );
			ret.push_back( std::string(b, after) );

			b = after;
		}	
	}

	return 0;
}
int resolve_line1( std::vector< std::string >& ret, std::string line )
{
	if( line == "" )
		return -1;

	std::stringstream ss(line);
	std::string city;
	while( std::getline( ss, city, ',' ) )
	{
		ret.push_back(city);
	}

	return 0;
}