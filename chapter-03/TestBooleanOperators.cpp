#include <iostream>

int main( void )
{
	int number = 0;
	std::cout << "Enter an interger: ";
	std::cin >> number;

	if( !(number%2) && !(number%3) )
		std::cout << number << " is divisible by 2 and 3." << std::endl;

	if( !(number%2) || !(number%3) )
		std::cout << number << " is divisible by 2 or 3." << std::endl;

	if( !( !(number%2) && !(number%3) ) && ( !(number%2) || !(number%3) ) )
		std::cout << number << " is divisilbe by 2 or 3, but not both." << std::endl;

	return 0;
}