/*
�ֲ�������������������ڶ��ǿ鼶��ġ�
ȫ�ֱ�����������������ڶ��ǳ��򼶱�ġ�
*/
#include <iostream>

int t1(); // Function protype
int t2(); // Function protype

int main()
{
	t1();
	t2();
	return 0;
}

int y; // Global variable, default to 0.

int t1()
{
	int x = 1;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;
	x++;
	y++;
	return 0;
}
int t2()
{
	int x = 1;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;
	return 0;
}