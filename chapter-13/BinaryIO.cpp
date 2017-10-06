#include "Student.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main( void )
{
	std::vector< Student > stu;

	/* read from text file */
	std::ifstream fin;
	fin.open( "input.txt" );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	std::string line;
	while( std::getline( fin, line ) )
	{
		std::stringstream ss(line);
		std::string name;
		int score;
		ss >> name >> score;

		Student s(name, score);
		s.show();
		stu.push_back( s );
	}
	std::cout << "Read from text file Done!" << std::endl;
	fin.close();
	
	/* write to binary file */
	std::ofstream fout;
	fout.open( "stu.dat", std::ios::binary );
	if( !fout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}	

	unsigned sz = stu.size();
	for( unsigned i = 0; i < sz; ++i )
	{
		fout.write( reinterpret_cast<char*>(&stu[i]), sizeof(Student) );
	}
	std::cout << "Write to binary file Done!" << std::endl;
	fout.close();
	
	/* read from binary file */
	fin.open( "stu.dat", std::ios::binary );
	if( !fin.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	while( !fin.eof() )
	{
		Student t;
		fin.read( reinterpret_cast<char*>(&t), sizeof(Student) );
		if( fin.eof() )
			break;
		t.show();
	}

	std::cout << "Read from binary file Done!" << std::endl;
	fin.close();
	return 0;
}