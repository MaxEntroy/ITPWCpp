/*
����һ��Ƕ��ѭ����
ÿ�����ִ��һ�Σ��ڲ�ѭ��Ҫȫ��ִ��һ�顣

����һ���㣺��֪��ѭ��������ʱ����Ҫ����forѭ����
*/
#include <iostream>
#include <string>
#include <iomanip>
void display();

int main()
{
	display();
	return 0;
}

void display() // ��ôд�ĺô��ǣ���ʽ���Ƹ��Ӿ�׼���൱���ý������İ취����ͼ��ȫ���������������ٽ��д�ӡ��
{
	std::string title = "Multiplication Table";
	std::string separeted_line = std::string( 4*10 + 1, '-' );

	std::cout << std::string(4*3 - 1, ' ') << title << std::endl;
	std::cout << std::string(4, ' ');
	for( int i = 1; i <= 9; ++i )
		std::cout << std::setw(4) << i;
	std::cout << std::endl;
	std::cout << separeted_line << std::endl;

	for( int i = 1; i <= 9; ++i )
	{
		std::cout << i << " | ";
		for( int j = 1; j <= 9; ++j )
			std::cout << std::setw(4) << i*j;
		std::cout << std::endl;
	}

}