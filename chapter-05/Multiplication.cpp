/*
考察一个嵌套循环：
每次外层执行一次，内部循环要全部执行一遍。

还有一个点：当知道循环次数的时候。主要是用for循环。
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

void display() // 这么写的好处是，格式控制更加精准，相当于用解析法的办法，把图像全部都解析出来，再进行打印。
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