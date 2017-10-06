#include <iostream>
int main( void )
{
	char lowercase;
	std::cout << "Enter a lowercase letter: ";
	std::cin >> lowercase;

	//char uppercase = static_cast<char>( static_cast<int>(lowercase) - 32 );
	char uppercase = lowercase - 32;
	std::cout << "The corresponding uppercase letter is " << uppercase << std::endl;
}