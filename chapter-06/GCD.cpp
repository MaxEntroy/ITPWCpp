#include <iostream>

int get_gcd( int m, int n )
{
	if( !(m%n) )
		return n;
	else
		return get_gcd( n, m%n );
}
int get_gcd1( int m, int n )
{
	while(m%n)
	{
		int t = m;
		m = n;
		n = t%n;
	}
	return n;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	std::cout << "Enter first integer: ";
	std::cin >> num1;
	std::cout << "Enter second interger: ";
	std::cin >> num2;

	int gcd = get_gcd1(num1, num2);
	std::cout << "The greast common divisor for " << num1 << " and " << num2 << " is " ;
	std::cout << gcd << std::endl;

	return 0;
}