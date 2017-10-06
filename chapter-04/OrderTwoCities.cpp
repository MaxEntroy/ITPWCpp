#include <iostream>
#include <string>

int main( void )  
{
	std::string city1;
	std::string city2;

	std::cout << "Enter the first city: ";
	getline( std::cin, city1 );

	std::cout << "Enter the second city: ";
	getline( std::cin, city2 );

	const std::string show = "The cities in alphabetical order are ";
	if( city1 < city2 )
		std::cout << show << city1 << " " << city2 << std::endl;
	else
		std::cout << show << city2 << " " << city1 << std::endl;
	return 0;
}