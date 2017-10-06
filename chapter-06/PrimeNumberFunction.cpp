/*
打印出前n个素数。
枚举所有数字，判断每个数是否是素数。如果是，有效数增加。
直到n。跳出。
*/

#include <iostream>
#include <iomanip>

bool is_prime( int val );
void print_prime_numbers( int n );

int main( void )
{
	std::cout << "The first 50 prime numbers are " << std::endl;
	print_prime_numbers( 50 );
	return 0;
}
bool is_prime( int val )
{
	if( val < 2 )
		return false;
	for( int i = 2; i*i <= val; ++i )
	{
		if( !(val%i) )
			return false;
	}
	return true;
}
void print_prime_numbers( int n )
{
	int cnt = 0;
	for( int val = 2; ; ++val )
	{
		if( is_prime(val) )
		{
			++cnt;
			std::cout << std::setw(3) << val << " ";
			if( !(cnt%10) )
				std::cout << std::endl;
			if( !(cnt%n) )
				break;
		}
	}
}