#include <iostream>
void print_grade( double score )
{
	if( score >= 90 )
		std::cout << "A" << std::endl;
	else if( score >= 80 )
		std::cout << "B" << std::endl;
	else if( score >= 70 )
		std::cout << "C" << std::endl;
	else if( score >= 60 )
		std::cout << "D" << std::endl;
	else
		std::cout << "F" << std::endl;
}

int main( void )
{
	double score = 0.0;
	std::cout << "Enter a score: ";
	std::cin >> score;

	std::cout << "The grade is ";
	print_grade(score);

	return 0;
}