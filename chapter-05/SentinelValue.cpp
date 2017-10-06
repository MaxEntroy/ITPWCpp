/*
�����Ŀ�ҳ�����while�ĸ���д�����ڲ�֪��ѭ��������ʱ��
������Ҫ���ǳ��ڵ�һ�ε�����ʱ�򣬲�����Ҫ�жϡ�����������İ취�ǰ�������һ�������������

1.�ѵ�һ����д������
2.while(true){ ...break; }����������ʱ������
3.��ʼ��һ������ֵ��������������Ǳ�����ô����Ҫһ�㼼�ɣ���Ϊ����ֵsumҪ�ۼӣ�����sumҪ��������Ӱ��
4.ֱ����whileѭ�������ȡ��һ�ε���ֵ��Ȼ���жϡ�������forѭ��


#include <iostream>
int cal_sum();
int cal_sum1();
int cal_sum2();
int cal_sum3();
int main( void )
{
	int sum = cal_sum3();
	std::cout << "The sum is " << sum << std::endl;
	return 0;
}
int cal_sum()
{
	int data = 0;
	int sum = 0;

	std::cout << "Enter an integer(the input ends if it is 0): ";
	std::cin >> data;

	while( data != 0 )
	{
		sum += data;

		std::cout << "Enter an integer(the input ends if it is 0): ";
		std::cin >> data;
	}
	return sum;
}
int cal_sum1()
{
	int data = 0;
	int sum = 0;

	while( true )
	{
		std::cout << "Enter an integer(the input ends if it is 0): ";
		std::cin >> data;
		if( !data )
			break;

		sum += data;
	}

	return sum;
}
int cal_sum2()
{
	int data = -1;
	int sum = 1;

	while( data != 0 )
	{
		sum += data;

		std::cout << "Enter an integer(the input ends if it is 0): ";
		std::cin >> data;
	}

	return sum;
}
int cal_sum3()
{
	int data = 0;
	int sum = 0;
	while( std::cout << "Enter an integer(the input ends if it is 0): ", std::cin >> data, data != 0 )
	{
		sum += data;
	}
	return sum;
}*/

/*
Don't use floating-point for equality checking in a loop control expression.
Because floating-point values are approximations for some values, using them can result in imprecise counter values
and inaccurate results.

consider the following code for computing 1 + 0.9 + 0.8 + ... + 0.1

Variable item starts with 1 and is reduced by 0.1, each time the loop body is executed.
The loop should terminate when item becomes 0. However, there is no gurantee that item will be exactly 0.
Because the floating-point arithmetic is approximated. This loop seems fine, but actually, it is an infinite loop.
*/
#include <iostream>
double f()
{
	double item = 1.0;
	double sum = 0.0;
	
	while( item != 0 ) // no guarantee item will be 0
	{
		sum += item;
		item -= 0.1;
	}

	return sum;
}
double f1()
{
	int item = 10;
	double sum = 0.0;

	while( item != 0 )
	{
		sum += 1.0 * item / 10;
		--item;
	}
	return sum;
}
int main( void )
{
	double ret = f1();
	std::cout << ret << std::endl;
	return 0;
}