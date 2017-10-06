#include <iostream>

int increment( int& n );
 
int main()
{
	int x = 1;
	std::cout << "Before the call, x is " << x << std::endl;
	increment(x);
	std::cout << "After the call, x is " << x << std::endl;
	return 0;
}

int increment( int& n )
{
	n++;
	std::cout << "\t n inside the function is " << n << std::endl;

	return 0;
}