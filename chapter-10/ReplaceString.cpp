/*

	1.start_index = 0;
	2.循环：ret = s.find( start_index, old_str ), ret != std::npos
		2.1.替换new_str
		2.2.start_index = ret + sz_new_str
	3.返回s



#include <iostream>
#include <string>

bool replace_string( std::string& s, const std::string& old_substr, const std::string& new_substr ); // return true if s is changed, and otherwise, it returns false.


int main( void )
{
	std::string s, old_str, new_str;
	std::cout << "Enter string s, oldSubStr, and newSubStr: ";
	std::cin >> s >> old_str >> new_str;

	bool ret = replace_string( s, old_str, new_str );
	if( ret )
		std::cout << "The replace string is " << s << std::endl;
	else
		std::cout << "No matches" << std::endl;

	return 0;
}

bool replace_string( std::string& s, const std::string& old_substr, const std::string& new_substr )
{
	int start_index = 0;
	int ret = 0;
	
	int sz_old = old_substr.size();
	int sz_new = new_substr.size();

	bool flag = false;
	while( ret = s.find( old_substr, start_index ), ret != std::string::npos )
	{
		flag = true;
		s.replace( ret, sz_old, new_substr );
		start_index += sz_new;
	}

	return flag;
} */

/*
实现split()函数。
按照结尾符号，进行分割。
当然，对于空格是很容易的。但是对于','，则不能用stringstream的办法。
因为只有空白符才是stringstream的分隔符。
*/

#include <iostream>
#include <string>
#include <vector>

std::vector< std::string > split( const std::string& line, char delimeter = ',' );
std::vector< std::string > split1( const std::string& line, char delimeter = ',' );

int main( void )
{
	std::string test_str = ",,,";
	std::vector< std::string > ret = split1( test_str );

	int sz = ret.size();
	std::cout << sz << std::endl;
	for( int i = 0; i < sz; ++i )
	{
		std::cout << ret[i] << std::endl;
	}


	return 0;
}

std::vector< std::string > split( const std::string& line, char delimeter )
{
	typedef std::string::const_iterator const_iter;
	const_iter b = line.begin();
	const_iter e = line.end();

	std::vector<std::string> ret;
	while( b != e )
	{
		// find the begin
		while( b != e && *b == delimeter ) ++b;

		if( b < e )
		{
			// find the end
			const_iter after = b;
			while( after != e && *after != delimeter ) ++after;

			// generate a pattern
			ret.push_back( std::string(b, after) );
		
			b = after;
		}
	}
	return ret;
}
std::vector< std::string > split1( const std::string& line, char delimeter )
{
	std::vector< std::string > ret;
	typedef std::string::const_iterator const_iter;
	const_iter b = line.begin();
	const_iter e = line.end();


	while( b < e )
	{
		const_iter after = b;
		while( after < e && *after != delimeter ) ++after;
		if( b < after )
		{
			ret.push_back( std::string( b, after ) );
			b = (after < e)?(after + 1):after;
		}
		else
		{
			ret.push_back(std::string(""));
			b = (after < e)?(after + 1):after;
		}
	}

	if(*(b-1) == delimeter) // 最后一个符号是","的情形
		ret.push_back( "" );

	return ret;
}