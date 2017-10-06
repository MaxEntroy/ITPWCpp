#include <iostream>
#include <fstream>
int main( void )
{
	std::ifstream fin;
	fin.open( "scores.txt" );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	int val = 0;
	int sum = 0;
	while( fin >> val )
	{
			sum += val;
	}
	std::cout << "Total is " << sum << std::endl;
	fin.close();
	return 0;
}