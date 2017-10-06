/*
两种实现都没有问题，前者从行。后者从每个字符。
前者最终会多一个换行。当然，可以通过判断是否为有效输入避免这个问题。
如果是有效输入才打入一个换行。
*/

#include <iostream>
#include <fstream>
#include <string>

int copy_file(  const std::string& src,  const std::string& tgt );
int copy_file1(  const std::string& src,  const std::string& tgt );
int copy_file2(  const std::string& src ,  const std::string& tgt );

int main( void )
{
	std::string input_file_name;
	std::string output_file_name;

	std::cout << "Enter a source file name: ";
	std::cin >> input_file_name;
	std::cout << "Enter a target file name: ";
	std::cin >> output_file_name;

	copy_file2( input_file_name, output_file_name );

	std::cout << "Copy Done!" << std::endl;

	return 0;
}

int copy_file( const std::string& src,  const std::string& tgt )
{
	if( src == "" || tgt == "" )
	{	
		std::cerr << "Invalid argumnts!" << std::endl;
		return -1;
	}

	std::ifstream fin;
	fin.open( src.c_str() );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	std::ofstream fout;
	fout.open( tgt.c_str() );
	if( !fout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	std::string line;
	while( std::getline( fin, line ) ) 
	{
		fout << line;
		if( !fin.eof() )
			fout << std::endl;
	}

	fin.close();
	fout.close();

	return 0;
}
int copy_file1( const std::string& src, const std::string& tgt )
{
	if( src == "" || tgt == "" )
	{	
		std::cerr << "Invalid argumnts!" << std::endl;
		return -1;
	}

	std::ifstream fin;
	fin.open( src.c_str() );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	std::ofstream fout;
	fout.open( tgt.c_str() );
	if( !fout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	char ch;
	while( fin.get(ch) ) fout.put(ch);

	fin.close();
	fout.close();

	return 0;
}
int copy_file2( const std::string& src, const std::string& tgt )
{
	if( src == "" || tgt == "" )
	{	
		std::cerr << "Invalid argumnts!" << std::endl;
		return -1;
	}

	std::ifstream fin;
	fin.open( src.c_str() );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	std::ofstream fout;
	fout.open( tgt.c_str() );
	if( !fout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	while( !fin.eof()) 
	{
		std::cout << "file pointer before read : " << fin.tellg() << std::endl;;
		char ch = fin.get();
		fout.put(ch);
		std::cout << "file pointer after read : " << fin.tellg() << std::endl; ;
	}

	fin.close();
	fout.close();

	return 0;
}