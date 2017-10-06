/*
输出前50个素数。
当然可以用素数筛法，筛够50个就行。
*/
#include <iostream>
#include <cstring>
#include <iomanip>
const int maxn = 50;

int prime_table[maxn + 5];

bool is_prime( int val );
void get_prime_table(); 

int main( void )
{
	std::cout << "The first 50 prime numbers are" << std::endl;
	get_prime_table();
	for( int i = 0; i < maxn; ++i )
	{
		if( !(i%10) && i )
			std::cout << std::endl;

		std::cout << std::setw(4) << prime_table[i];
		
	}
	std::cout << std::endl;

	return 0;
}

bool is_prime( int val )
{
	if( val < 2 )
		return false;
	else
	{
		for( int divisor = 2; divisor*divisor <= val; ++divisor )
		{
			if( !(val%divisor) )
				return false;
		}
		return true;
	}
}
void get_prime_table()
{
	std::memset( prime_table, 0, sizeof(prime_table) );
	int count = 0;
	for( int val = 2; count < maxn; ++val )
	{
		if( is_prime(val) )
			prime_table[count++] = val;
	}
}