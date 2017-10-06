/*
这个题目的逻辑是，不断的提示输入，猜数字。
直到猜对为止，当然，对于数字的大小要给出提示才行。
相当于实现两份查找的过程。

对于while和for的区别：
直到循环次数的时候，明确要用for。用while也是可以，只不过建议用for
不知道循环次数的时候，建议用while。

对于while的写法，有如下三种。
比如针对下面的题目，第一次迭代要怎么写。因为第一次本质是不需要判断的。那么给出下面三种建议的写法：
1.首先迭代一次，再进行正式的循环。
2.while(true){} 找到不符合条件的情形，break;
3.初始化一个错误值，然后进入迭代就行。（本题采用的是这种写法）

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