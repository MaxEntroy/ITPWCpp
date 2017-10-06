/*
 ��һĿ��Ҫ��ѧϰ�ļ��Ļ���������
 ���ļ�����ȡ�ļ����ݣ��ر��ļ���
 ����Ӧ��֪����ô���ж��ļ���ȡ�Ƿ���ϡ�
 when there is nothing more to read, eof() returns true.
*/
#include <iostream>
#include <fstream>

int main( void )
{
	std::ifstream fin;
	fin.open( "numbers.txt" );

	if( !fin.is_open() )
		return -1;

	int sum = 0;
	while( !fin.eof() )
	{
		int t = 0; /* 
				   ���ۺ�ʱ��������ʼ�����Ǻܺõ�ϰ�ߡ�
				   �㿴���������û�г�ʼ������ô�����տα�����˵�ģ��ļ����һ�����һ�����ֺ�������������հ׷���ʱ��
				   ��ô���뻹�ǿ��Ա�֤��ȷ����Ϊ��������ڿհ׷����϶���Ҫ����һ�ζ�ȡ�����ǣ�fin�Ǻ��Կհ׷��ġ�
				   ���ԣ�t���û�б���ʼ������ô��������ֵ�ͻᱻ��ȡ��sum�У��Ӷ����½������
				   ����Ľ���취��������1.��tһ����ʼ��ֵ��2.�ڶ�ȡ�����ʱ����һЩ�취�����Ȳ���ǰ�ߣ�������ѧϰ�ļ���ʱ��
				   ѧϰ���ߵİ취��*/
		fin >> t;
		sum += t;
	}
	std::cout << "Total score is " << sum << std::endl;
	std::cout << "Done" << std::endl;

	fin.close();

	return 0;
}