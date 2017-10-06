#include <iostream>
#include <cctype>

int main( void )
{
	char ch;
	std::cout << "Enter a character: " ;
	std::cin >> ch;
	std::cout << "You entered " << ch << std::endl;

	if( std::islower(ch) )
	{
		std::cout << "It is a lowercase letter" << std::endl;
		std::cout << "Its equivalent uppercase letter is " << static_cast<char>(std::toupper(ch)) << std::endl;
	}
	else if( std::isupper(ch) )
	{
		std::cout << "It is a uppercase letter" << std::endl;
		std::cout << "Its equivalent lowercase letter is " << static_cast<char>(std::tolower(ch)) << std::endl;
	}
	else if( std::isdigit(ch) )
		std::cout << "It is a digit character" << std::endl;

	return 0;
}