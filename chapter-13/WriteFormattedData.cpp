#include <iostream>
#include <fstream>
#include <iomanip>
int main( void )
{
	std::ofstream fout;
	fout.open( "formattedscores.txt" );
	if( !fout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	fout << std::setw(6) << "John" << std::setw(2) << "T" << std::setw(6) << "Smith" << " " << std::setw(4) << 90 << std::endl; 
	fout << std::setw(6) << "Eric" << std::setw(2) << "K" << std::setw(6) << "Jones" << " " << std::setw(4) << 85 << std::endl; 

	fout.close();
	std::cout << "Done" << std::endl;
	return 0;
}