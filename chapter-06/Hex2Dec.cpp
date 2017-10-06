#include <iostream>
#include <string>
#include <cctype>
int hex_to_dec( const std::string& hex );

int main( void )
{
	std::string hex;
	std::cout << "Enter a hex number: ";
	std::cin >> hex;

	int dec = hex_to_dec(hex);
	std::cout << "The decimal value for hex number " << hex << " is " << dec << std::endl;

	return 0;
}

int hex_to_dec( const std::string& hex )
{
	int ret = 0;
	int sz = hex.size();
	for( int i = sz - 1, base = 1, radix = 16; i >= 0; --i, base *= radix )
	{
		ret += ((hex[i] <= '9')?(hex[i] - 48):(std::toupper(hex[i])-55)) * base;
	}
	return ret;
}