/*
规则基本上我懂了：
1.数字一样，顺序一样
2.数字一样，顺序不一样
3.有一个数字一样
4.没有一个数字一样

比较的时候是两位两位比较，所以对于十位以内的数字要补充前导0.
这里考虑辅助变量的设计采用字符串

当然答案的办法也是很好地，因为数字的位数不多。即使输入全部整数。注意获取也是没有问题的。

*/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

int main( void )
{

	std::string pick_num;
	std::cout << "Enter your lottery pick (two digits): ";
	std::cin >> pick_num;

	time_t seed = time(0);
	srand( static_cast<unsigned int>(seed) );
	int rand_num = rand() % 100;
	
	std::string lottery_num;
	if( rand_num >= 10 )
	{
		lottery_num += static_cast<char>('0' + rand_num/10) ;
		lottery_num += static_cast<char>( '0' + rand_num%10 ); 
	}
	else
	{
		lottery_num += '0';
		lottery_num += static_cast<char>( '0' + rand_num );
	}

	std::cout << "The lottery number is " << rand_num  << std::endl;

	int win = 0;

	if( pick_num == lottery_num )
	{
		win = 10000;
		std::cout << "Exact match: you win $" << win << std::endl;
	}
	else if( pick_num[0] == lottery_num[1] && pick_num[1] == lottery_num[0] )
	{	
		win = 3000;
		std::cout << "Match all digits: you win $" << win << std::endl;
	}
	else if( pick_num[0] == lottery_num[0] || pick_num[0] == lottery_num[1] || pick_num[1] == lottery_num[0] || pick_num[1] == lottery_num[1]  )
	{
		win = 1000;
		std::cout << "Match one digit: you win $" << win << std::endl;
	}
	else
	{
		std::cout << "Sorry, no match" << std::endl;
	}
	return 0;
}