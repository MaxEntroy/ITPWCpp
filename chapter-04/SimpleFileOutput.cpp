#include <iostream>
#include <fstream>

int main( void )
{
	std::ofstream output;

	// create a file
	output.open("numbers.txt");

	// write numbers
	output << 95 << " " << 56 << " " << 34;

	// close file
	output.close();

	std::cout << "Done" << std::endl;

	return 0; 
}