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

	while( number < 20 ) // ����ѭ�������з�֧���涼��Ҫ���� ���Ǹ��״��
	{
		if( number == 11 || number == 10 )
		{	
			++number; // controlling the loop
			continue;
		}
		
		sum += number;
		++number; // controlling the loop
	}
	std::cout << "The sum is " << sum << std::endl;
}
void f1()
{
	int number = 0;
	int sum = 0;

	while( number < 20 ) // ����ѭ�������з�֧���涼��Ҫ���� ���Ǹ��״��
	{
		if( number != 10 && number != 11 )
		{	
			sum += number;
		}
		
		++number; // controlling the loop
	}
	std::cout << "The sum is " << sum << std::endl;
}