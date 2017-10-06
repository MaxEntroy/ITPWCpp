#include <iostream>
#include <string>

std::string reverse( const std::string& s );
std::string reverse1( std::string s);

int main( void )
{
	std::string s;
	std::cout << "Enter a string: ";
	std::cin >> s;
	std::string ans = reverse1(s);
	std::cout << "The reversed string is " << ans << std::endl;
	return 0;
}

std::string reverse( const std::string& s )
{
	return std::string( s.rbegin(), s.rend() );
}
std::string reverse1( std::string s)
{
	int sz = s.size();
	int mid = sz/2;
	for( int i = 0; i < mid; ++i )
	{
		char t = s[i];
		s[i] = s[sz - 1 - i];
		s[sz - 1 - i] = t;
	}
	return s;
}