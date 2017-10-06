#include <iostream>
/*
A year is a leap year if it is divisible by 4 but not by 100, or if it is divisible by 400.
*/
int main( void )
{
	int year = 0;
	std::cout << "Enter a year: ";
	std::cin >> year;

	if( !(year%4) && (year%100) || !(year%400) )
		std::cout << year << " is a leap year." << std::endl;
	else
		std::cout << year << " is not a leap year." << std::endl;

	return 0;
}