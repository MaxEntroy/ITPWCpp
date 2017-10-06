#include <iostream>

int max( int num1, int num2 )
{
	return (num1>num2)?num1:num2;
}

int main( void )
{
	int i = 5;
	int j = 2;
	int k = max(i, j);

	std::cout << "The maximum between " << i << " and " << j << " is " << k << std::endl;

	return 0;
}
