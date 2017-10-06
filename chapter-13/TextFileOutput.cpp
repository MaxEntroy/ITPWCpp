#include <iostream>
#include <fstream>

int main()
{
	std::ofstream fout;
	fout.open( "E:\\workspace\\coding\\c-c++\\book\\Introduction to programming with c++\\Chapter13\\13_1\\scores.txt" );

	if( fout.fail() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	fout << "John T Smith 90" << std::endl;
	fout << "Eric K Jones 85" << std::endl;

	fout.close();
	std::cout << "Done" << std::endl;
	return 0;
}