/*
code before you think
ö�����������е�Լ����������Ա�����������ڣ����򲻴��ڡ�
*/
#include <iostream>

int gcd( int m, int n );

int main( void )
{
	int m = 0;
	int n = 0;
	std::cout << "Enter first integer: ";
	std::cin >> m;
	std::cout << "Enter second interger: ";
	std::cin >> n;

	int ans = gcd(m, n);
	if( 1 == ans )
		std::cout << "There is no greatest common divison for " << m << " and " << n << std::endl;
	else
		std::cout << "The greast common divison for " << m << " and " << n << " is " << ans << std::endl;

	return 0;
}

int gcd( int m, int n )
{
	int k = (m>n)?n:m;
	for( ; k >= 2; --k )
	{
		if( !(m%k) && !(n%k) )
			break;
	}
	return k;
}