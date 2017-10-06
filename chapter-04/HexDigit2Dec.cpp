/*
十六进制 - 十进制
*/

#include <iostream>
#include <cctype>

int hex2dec( char hex );

int main( void )
{
	char ch;
	std::cout << "Enter a hex digit: ";
	std::cin >> ch;

	int dec = hex2dec( ch );
	if( -1 == dec )
		std::cout << ch << "is an invalid input" << std::endl;
	else
	{
		if( '0' <= ch && ch <= '9' )
			std::cout << "The decimal value for hex digit " << ch << " is " << dec << std::endl;
		else
			std::cout << "The decimal value for hex digit " << static_cast<char>(std::toupper(ch)) << " is " << dec << std::endl;
	}
		
	return 0;
}

int hex2dec( char hex )
{
	if( '0' <= hex && hex <= '9' )
		return hex - '0';
	else if( 'A' <= std::toupper(hex) && std::toupper(hex) <= 'F' )
		return 10 + std::toupper(hex) - 'A'; // 用-谁-做基准减-谁-就行了
	else
		return -1;
}