/*
����һ����λ������λ����Ҳ��ô��ʾ��
��ʾ�û����룺
	1.�������˳��һ����10000
	2.����һ����˳��һ��.3000
	3.��һ������һ��,1000
*/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

int main( void ) 
{
	std::string guess_num;
	std::cout << "Enter your lottery pick: ";
	std::cin >> guess_num;
	
	srand(static_cast<unsigned int>(time(0)));
	int r = rand() % 100;
	std::string rand_num;
	rand_num.push_back( '0' + r/10 ); // rand_num += static_cast<char>('0' + r/10);
	rand_num.push_back( '0' + r%10 );
	std::cout << "The lottery number is " << rand_num << std::endl;

	int money = 0;
	if( guess_num == rand_num )
	{
		money = 10000;
		std::cout << "Match all digits: you win $" << money << std::endl;
	}
	else if( rand_num[0] == guess_num[1] && rand_num[1] == guess_num[0] )
	{
		money = 3000;
		std::cout << "Match one digit: you win $" << money << std::endl;
	}
	else if( rand_num[0] == guess_num[0] || rand_num[0] == guess_num[1] || rand_num[1] == guess_num[0] || rand_num[1] == guess_num[1] )
	{
		money = 1000;
		std::cout << "Match one digit: you win $" << money << std::endl;
	}
	else
	{
		std::cout << "Sorry, no match" << std::endl;
	}

	return 0;
}