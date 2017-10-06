#include <iostream>

int swap( int& n1, int& n2 );

int main()
{
	int num1 = 1;
	int num2 = 2;

	std::cout << "Before invoking the swap function, num1 is " << num1 << ", num2 is " << num2 << std::endl;
	swap( num1, num2 );
	std::cout << "After invoking the swap function, num1 is " << num1 << ", num2 is " << num2 << std::endl;

	return 0;
}

int swap( int& n1, int& n2 )
{
	std::cout << "\t Inside the swap function" << std::endl;
	std::cout << "\t Before swaping n1 is " << n1 << ", n2 is " << n2 << std::endl;
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	std::cout << "\t After swaping n1 is " << n1 << ", n2 is " << n2 << std::endl;

	return 0;
}