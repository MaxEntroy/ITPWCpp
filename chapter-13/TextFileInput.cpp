#include <iostream>
#include <fstream>
#include <string>

int main( void )
{
	std::ifstream fin;
	fin.open( "scores.txt" );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	std::string first, middle, last;
	int score;
	while( !fin.eof() )
	{
		fin >> first >> middle >> last >> score;
		if( fin ){
		std::cout << first << " " << middle << " " << last << std::endl;
		}
	}

	fin.close();
	std::cout << "Done" << std::endl;
	return 0;
}