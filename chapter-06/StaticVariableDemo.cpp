/*
��̬�ֲ�������
�����򲻱䣬���ǿ鼶��ġ�
�����ڱ�̳��򼶱�ġ�
�ص㣺��ʼ��һ�Ρ���Ϊ��û�б����١�
*/
#include <iostream>

void t1(); // Function prototype

int main()
{
	t1();
	t1();
	return 0;
}

void t1()
{
	static int x = 1;
	int y = 1;

	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;
	++x;
	++y;
}