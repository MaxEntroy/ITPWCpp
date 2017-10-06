/*
�������Ҫ�ṹ�������䣬��Ҫ��Ϊ�ˡ�ʵ�������д��
�������ĸ�ѧ������Ϣ����ϣ��ֻ�Ƕ�ȡ������ѧ������Ϣ��Ȼ����£������Ҳ�ϣ�������ѧ��֮ǰ�Ķ���ȡ������
���ԣ���Ҫ�ļ���������ʡ�
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
	// ����������
	std::ifstream fin;
	fin.open( "stu.dat", std::ios::binary );
	if( !fin.is_open() ) 
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	// ��ȡλ�ڵ�n��λ�õ�Ԫ��
	Student s;
	fin.seekg( n*sizeof(Student));
	fin.read( reinterpret_cast<char*>(&s), sizeof(Student) );
	fin.close();

	// ���µ�n��λ�õ�Ԫ��
	std::string upate_name;
	std::cout << "Please input n-th student name: ";
	std::cin >> upate_name;  
	s.set_name( upate_name );

	// ���������
	std::ofstream fout;
	fout.open( "stu.dat", std::ios::binary | std::ios::ate); // �����������
	if( !fout.is_open() )
	{
		std::cerr << "Can not open the file!" << std::endl;
		return -1;
	}

	// �ƶ��ļ�ָ�룬�ڵ�n��λ�ý���д��
	fout.seekp( n*sizeof(Student), std::ios::beg );
	std::cout << "tellp is " << fout.tellp() << std::endl;
	fout.write( reinterpret_cast<char*>(&s), sizeof(Student));
	fout.close();

	// ��ȡ����Ԫ�ز����
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