#include <iostream>
#include <fstream>
#include <string>
void show_state( const std::fstream& stream );

int main( void )
{
	std::fstream finout;
	finout.open( "input.dat", std::ios::out );
	if( !finout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	finout << "Dallas";
	std::cout << "Normal operations no errors" << std::endl;
	show_state( finout );

	finout.close();

	finout.open( "input.dat", std::ios::in );

	std::string city;
	finout >> city ;
	std::cout << "Normal operations no errors" << std::endl;
	show_state( finout );
	finout.close();

	finout >> city ;
	std::cout << "Bad operations no errors" << std::endl;
	show_state( finout );

	return 0;
}

void show_state( const std::fstream& stream )
{
	std::cout << "Stream status: " << std::endl;
	std::cout << " eof() " << stream.eof() <<std::endl;
	std::cout << " fail() " << stream.fail() << std::endl;
	std::cout << " bad() " << stream.bad() << std::endl;
	std::cout << " good() " << stream.good() << std::endl;
}