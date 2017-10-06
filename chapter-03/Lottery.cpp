/*
����������Ҷ��ˣ�
1.����һ����˳��һ��
2.����һ����˳��һ��
3.��һ������һ��
4.û��һ������һ��

�Ƚϵ�ʱ������λ��λ�Ƚϣ����Զ���ʮλ���ڵ�����Ҫ����ǰ��0.
���￼�Ǹ�����������Ʋ����ַ���

��Ȼ�𰸵İ취Ҳ�Ǻܺõأ���Ϊ���ֵ�λ�����ࡣ��ʹ����ȫ��������ע���ȡҲ��û������ġ�

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