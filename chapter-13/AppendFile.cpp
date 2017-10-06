#include <iostream>
#include <fstream>
#include <string>
int main( void )
{
	std::ofstream fout;
	fout.open( "input.dat" );

	// write cities
	fout << "Dalla" << " " << "Houston" << " " << "Altana" << " ";
	fout.close();

	fout.open( "input.dat", std::ios::app );
	fout << "Savanah" << " " << "Austin" << " " << "Chicago" << std::endl;
	fout.close();

	std::string s;
	std::ifstream fin;
	fin.open( "input.dat" );
	while( fin >> s )
	{
		std::cout << s << std::endl;
	}
	fin.close();

	return 0;
}