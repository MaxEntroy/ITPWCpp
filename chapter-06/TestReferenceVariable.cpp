#include <iostream>

int main()
{
	int count = 1;
	int& ref = count;

	std::cout << "count is " << count << std::endl;
	std::cout << "ref is " << ref << std::endl;

	++count;
	std::cout << "count is " << count << std::endl;
	std::cout << "ref is " << ref << std::endl;

	count = 10;
	std::cout << "count is " << count << std::endl;
	std::cout << "ref is " << ref << std::endl;

	return 0;
}