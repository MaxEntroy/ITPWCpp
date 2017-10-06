#include <iostream>
#include <fstream>

int main( void )
{
	std::ifstream fin;

	fin.open("numbers.txt");

	int score1 = 0, score2 = 0, score3 = 0;
	fin >> score1 >> score2 >> score3;

	std::cout << "Total score is " << score1 + score2 + score3 << std::endl;

	fin.close();
	std::cout << "Done" << std::endl;

	return 0;
}