#include <iostream>
#include <ctime>
#include <cstdlib>
int main()
{
	char starting_character;
	char ending_character;

	std::cout << "Enter a starting character: ";
	std::cin >> starting_character;
	std::cout << "Enter a ending character: ";
	std::cin >> ending_character;

	// generate a random character between starting character and ending character
	srand(static_cast<unsigned int>(time(0)));
	
	/* 
	int diff = static_cast<int>( ending_character ) - static_cast<int>( starting_character ) + 1;
	char random_character = static_cast<char>( starting_character + rand() % diff );
	 按照道理来说我觉得我这么写应该是最标准的，就是干脆不用隐式转换 全部显式转换 
		目前按照书里的写法应该是，从之前两个题看出来，之前的变化依赖于隐式转换。最后一步的变换依赖于显式转换
		我猜这么做，可能是为了语义更加清晰吧
	*/

	char random_character = static_cast<char>( starting_character + rand() % ( ending_character - starting_character + 1 ) );
	std::cout << "The random character between " << starting_character << " and " << ending_character << " is " 
		<<random_character << std::endl; 

	return 0;
}