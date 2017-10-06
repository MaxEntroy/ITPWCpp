/*
这个题目还是考察怎么写循环：
写循环考虑这么几点；
1.循环条件是什么(loop-continuation-condition)
2.循环需要反复执行的语句是什么(statements that need to be repeated)
3.怎么控制循环(controlling the loop)
*/
#include <iostream>
#include <iomanip>

void f( double tuition );

int main( void )
{

	f(10000.0);
	return 0;
}

void f( double initial_tuition )
{
	double tuition = initial_tuition;
	int year = 0;

	while( tuition < 2*initial_tuition )
	{
		tuition = tuition * 1.07;
		++year;
	}

	std::cout << "Tuition will be doubled in " << year << " years" << std::endl;
	std::cout << std::fixed << std::setprecision(2) 
		<< "Tuition will be $" << tuition << " in " << year << " years" << std::endl;
}