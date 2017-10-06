/*
静态局部变量：
作用域不变，还是块级别的。
生存期编程程序级别的。
特点：初始化一次。因为并没有被销毁。
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