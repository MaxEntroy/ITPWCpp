/*
�����Ŀ���ǿ�����ôдѭ����
дѭ��������ô���㣻
1.ѭ��������ʲô(loop-continuation-condition)
2.ѭ����Ҫ����ִ�е������ʲô(statements that need to be repeated)
3.��ô����ѭ��(controlling the loop)
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