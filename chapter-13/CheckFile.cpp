#include <iostream>
#include <fstream>
#include <string>

int main( void )
{
	std::string filename;
	std::cout << "Enter a filename: ";
	std::cin >> filename;

	std::ifstream fin;
	fin.open( filename.c_str() );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	std::cout << filename << std::endl;

	fin.close();
	std::cout << "Done" << std::endl;
	return 0;
}