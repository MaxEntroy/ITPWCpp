#include <iostream>
#include <fstream>
#include <string>

int write_binary_file( const std::string& word );
std::string read_binary_file();

int write_binary_file1( int val );
int read_binary_file1();

int main()
{
	int val = 128;
	write_binary_file1( val );

	int t = read_binary_file1();
	std::cout << t << std::endl;

	return 0;
}

int write_binary_file( const std::string& word )
{
	std::ofstream fout;
	fout.open( "input.dat", std::ios::binary );
	if( !fout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	fout.write( word.c_str(), word.size() );

	fout.close();
	return 0;
}
std::string read_binary_file()
{
	static const int maxn = 32;
	char tmp[maxn];
	
	std::ifstream fin;
	fin.open( "input.dat", std::ios::binary );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return NULL;
	}

	fin.read( tmp, maxn - 1 ); // the last character for '\0'
	tmp[fin.gcount()] = '\0';

	fin.close();

	std::string ret( tmp, tmp + fin.gcount() );
	return ret;
}

int write_binary_file1( int val )
{
	std::ofstream fout;
	fout.open( "input.dat", std::ios::binary );
	if( !fout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	fout.write( reinterpret_cast<char*>(&val), sizeof(int) );

	fout.close();
	return 0;
}
int read_binary_file1()
{
	int ret = 0;
	
	std::ifstream fin;
	fin.open( "input.dat", std::ios::binary );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	fin.read( reinterpret_cast<char*>(&ret) , sizeof(int) ); 

	return ret;
}