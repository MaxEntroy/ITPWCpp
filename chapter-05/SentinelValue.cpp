/*
这个题目我尝试了while的各种写法：在不知道循环次数的时候。
问题主要就是出在第一次迭代的时候，并不需要判断。所以最基本的办法是把它当做一种特殊情况处理。

1.把第一迭代写在外面
2.while(true){ ...break; }不符合条件时，跳出
3.初始化一个错误值。进入迭代。但是本题这么做需要一点技巧，因为错误值sum要累加，所以sum要消除这种影响
4.直接在while循环里面获取第一次迭代值，然后判断。这点很像for循环


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