/*
�����Ŀ���߼��ǣ����ϵ���ʾ���룬�����֡�
ֱ���¶�Ϊֹ����Ȼ���������ֵĴ�СҪ������ʾ���С�
�൱��ʵ�����ݲ��ҵĹ��̡�

����while��for������
ֱ��ѭ��������ʱ����ȷҪ��for����whileҲ�ǿ��ԣ�ֻ����������for
��֪��ѭ��������ʱ�򣬽�����while��

����while��д�������������֡�
��������������Ŀ����һ�ε���Ҫ��ôд����Ϊ��һ�α����ǲ���Ҫ�жϵġ���ô�����������ֽ����д����
1.���ȵ���һ�Σ��ٽ�����ʽ��ѭ����
2.while(true){} �ҵ����������������Σ�break;
3.��ʼ��һ������ֵ��Ȼ�����������С���������õ�������д����

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
void guess_number();
int main( void )
{
	guess_number();
	return 0;
}
void guess_number()
{
	std::time_t seed = std::time(0);
	std::srand(static_cast<unsigned int>(seed));
	int number = rand() % 101; // [0, 100]

	std::cout << "Guess a magic number between 0 and 100" << std::endl;
	int guess = -1;

	while( guess != number )
	{
		std::cout << "Enter your guess: ";
		std::cin >> guess;


		if( guess == number )
		{
			std::cout << "Yes, the number is " << guess << std::endl;
			break;
		}
		else if( guess < number )
			std::cout << "Your guess is too low" << std::endl;
		else
			std::cout << "Your guess is too high" << std::endl;
	}
}