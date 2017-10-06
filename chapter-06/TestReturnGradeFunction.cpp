#include <iostream>
char get_grade( double score )
{
	if( score >= 90 )
		return 'A';
	else if( score >= 80 )
		return 'B';
	else if( score >= 70 )
		return 'C';
	else if( score >= 60 )
		return 'D';
	else
		return 'E';
}

int main( void )
{
	double score = 0.0;
	std::cout << "Enter a score: ";
	std::cin >> score;

	std::cout << "The grade is " << get_grade(score) << std::endl;

	return 0;
}