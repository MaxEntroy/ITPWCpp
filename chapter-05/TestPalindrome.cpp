/*
我用两种办法实现：
第一种朴素的办法，首尾想比较，直到找到一个mismatch或者是所有元素比较完毕
第二种办法，直接用反向迭代器想比较就行了。
*/

#include <iostream>
#include <string>

bool is_palindrome( const std::string& s );
bool is_palindrome1( const std::string& s );

int main()
{
	std::string s;
	std::cout << "Enter a string: ";
	std::cin >> s;

	bool ret = is_palindrome1( s );
	if( ret )
		std::cout << s << " is a palindrome." << std::endl;
	else
		std::cout << s << " is not a palindrome." << std::endl;

	return 0;
}
bool is_palindrome( const std::string& s )
{
	int sz = s.size();
	int mid =  sz/2;
	for( int i = 0; i < mid; ++i )
	{
		if( s[i] != s[sz - 1 - i] ) // find a mismatch
			return false;
	}
	return true;
}
bool is_palindrome1( const std::string& s )
{
	return std::equal(s.begin(), s.end(), s.rbegin());
}