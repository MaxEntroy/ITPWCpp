/*
前缀：
	1.从第一个字符开始
	2.且连续
*/


#include <iostream>
#include <string>

std::string larget_common_prefix( const std::string& s, const std::string& t );

int main( void )
{
	std::string s1;
	std::string s2;

	std::cout << "Enter s1: ";
	std::getline(std::cin, s1);
	std::cout << "ENTER s2: ";
	std::getline(std::cin, s2);

	std::string ans = larget_common_prefix( s1, s2 );
	std::cout << "The common prefix is " << ans << std::endl;

	return 0;
}
std::string larget_common_prefix( const std::string& s, const std::string& t )
{
	int sz_s = s.size();
	int sz_t = t.size();

	int i;
	for( i = 0; i < sz_s && i < sz_t; ++i )
	{
		if( s[i] != t[i] )
			break;
	}
	return std::string( s, 0 , i);
}