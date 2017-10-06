#include <iostream>
#include <ctime>
#include<cstdlib>
int main( void )
{
	std::srand( static_cast<unsigned int>(std::time(0)) );

	int a = rand() % 10;
	int b = rand() % 10;
	if( a < b )
	{ int t = a; a = b; b = t; }
	int answer = 0;

	std::cout << "What is " << a << " - " << b << "? ";
	std::cin >> answer;
	while( a-b != answer )
	{
		std::cout << "Wrong answer. Try again. " << "What is " << a << " - " << b << "? ";
		std::cin >> answer;
	}

	std::cout << "You got it!" << std::endl;

	return 0;
}