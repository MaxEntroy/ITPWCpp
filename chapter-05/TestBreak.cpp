/* 
The break statement breaks out of the loop;
The continue statement breaks out of the current iteration in the loop
*/
#include <iostream>

void f();
void f1();

int main( void )  
{
	f1();
	return 0;
}

void f()
{
	int number = 0;
	int sum = 0;

	while( number < 20 )
	{
		sum += number;
		if( sum > 100 ) // 找出大于100的第一个number
			break;

		++number;
	}

	std::cout << "The number is " << number << std::endl;
	std::cout << "The sum is " << sum << std::endl;
}
void f1()
{
	int number = 0;
	int sum = 0;
	bool found = false;

	while( number < 20 && !found  )
	{
		sum += number;
		if( sum > 100 ) // 找出大于100的第一个number
			found = true;
		else
			++number;
	}

	std::cout << "The number is " << number << std::endl;
	std::cout << "The sum is " << sum << std::endl;
}