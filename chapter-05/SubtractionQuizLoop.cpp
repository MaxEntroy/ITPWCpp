/*
循环的写法：
1.identify the statements that need to be repeated
2.controlling the loop

*/
#include <iostream>
#include <ctime>
#include <cstdlib>
void subtraction_quiz();

int main( void )
{
	subtraction_quiz();
	return 0;
}

void subtraction_quiz()
{
	std::time_t seed = std::time(0);
	std::srand( static_cast<unsigned int>(seed) );
	int correct_count = 0 ;
	long start_time = static_cast<long>(std::time(0)); // 返回unix epoch到现在的时间，按秒数记录。

	for( int cnt = 0; cnt < 5; ++cnt )
	{
		// generate 2 random numbers
		int a = rand() % 10;
		int b = rand() % 10;
		int ans = a - b;

		int guess = 0;
		std::cout << "What is " << a << " - " << b << "? ";
		std::cin >> guess;
	
		if( guess == ans )
		{
			std::cout << "You are correct!" << std::endl;
			++correct_count;
		}
		else 
			std::cout << a << " - " << b << " should be " << ans << std::endl;
	}
	long end_time = static_cast<long>(std::time(0)); // 如果不进行强转，可能无法输出正确的时间。

	std::cout << std::endl << "Correct count is " << correct_count << std::endl;
	std::cout << "Test time is " << end_time - start_time << std::endl;
}