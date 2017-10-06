/*
程序的主要结构基本不变，主要是为了。实现随机读写。
现在有四个学生的信息，我希望只是读取第三个学生的信息，然后更新，但是我不希望把这个学生之前的都读取出来。
所以，需要文件的随机访问。
*/
#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"

int update_n_student( int n );
int update_n_student1( int n );

int main( void )
{
	update_n_student1(2);
	return 0;
}

int update_n_student( int n )
{
	// 定义输入流
	std::ifstream fin;
	fin.open( "stu.dat", std::ios::binary );
	if( !fin.is_open() ) 
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	// 读取位于第n个位置的元素
	Student s;
	fin.seekg( n*sizeof(Student));
	fin.read( reinterpret_cast<char*>(&s), sizeof(Student) );
	fin.close();

	// 更新第n个位置的元素
	std::string upate_name;
	std::cout << "Please input n-th student name: ";
	std::cin >> upate_name;  
	s.set_name( upate_name );

	// 定义输出流
	std::ofstream fout;
	fout.open( "stu.dat", std::ios::binary | std::ios::ate); // 问题出在这里
	if( !fout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	// 移动文件指针，在第n个位置进行写入
	fout.seekp( n*sizeof(Student), std::ios::beg );
	std::cout << "tellp is " << fout.tellp() << std::endl;
	fout.write( reinterpret_cast<char*>(&s), sizeof(Student));
	fout.close();

	// 读取所有元素并输出
	fin.open("stu.dat", std::ios::binary);
	while( !fin.eof() )
	{
		fin.read( reinterpret_cast<char*>(&s), sizeof(Student) );
		if( fin.eof() )
			break;
		s.show();
	}

	fin.close();
	return 0;
}
int update_n_student1( int n )
{
	if( n < 0 )
	{
		std::cerr << "Invalid arguments!" << std::endl;
		return -1;
	}
	std::fstream finout;
	finout.open( "stu.dat", std::ios::in | std::ios::out | std::ios::binary );
	if( !finout.is_open() )
	{
		std::cerr << "Can not open the file" << std::endl;
		return -1;
	}

	Student s;
	finout.seekg( n*sizeof(Student), std::ios::beg );
	finout.read( reinterpret_cast<char*>(&s), sizeof(Student) );
	//s.show();

	std::string new_name;
	std::cout << "Please input the new name for n-th student:";
	std::cin >> new_name;
	s.set_name(new_name);

	finout.seekp( n*sizeof(Student), std::ios::beg );
	finout.write( reinterpret_cast<char*>(&s), sizeof(Student) );

	finout.seekp(0, std::ios::beg);
	while( !finout.eof() ) 
	{
		finout.read( reinterpret_cast<char*>(&s), sizeof(Student) );
		if( finout.eof() )
			break;
		s.show();
	}

	finout.close();
	return 0;
}