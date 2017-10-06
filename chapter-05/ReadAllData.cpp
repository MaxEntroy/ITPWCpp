/*
 这一目主要是学习文件的基本操作。
 打开文件，读取文件内容，关闭文件。
 并且应该知道怎么样判断文件读取是否完毕。
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
				   无论何时，变量初始化都是很好的习惯。
				   你看，这里如果没有初始化，那么当按照课本上来说的，文件最后一行最后一个数字后面如果有其他空白符的时候，
				   那么代码还是可以保证正确。因为，如果存在空白符，肯定还要进行一次读取，但是，fin是忽略空白符的。
				   所以，t如果没有被初始化，那么他的垃圾值就会被读取到sum中，从而导致结果错误。
				   这里的解决办法有两个：1.给t一个初始化值。2.在读取输入的时候，想一些办法。我先采用前者，在深入学习文件的时候
				   学习后者的办法。*/
		fin >> t;
		sum += t;
	}
	std::cout << "Total score is " << sum << std::endl;
	std::cout << "Done" << std::endl;

	fin.close();

	return 0;
}