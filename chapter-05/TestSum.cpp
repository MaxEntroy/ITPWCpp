/* 
其实这两天的例题，多次涉及了浮点数等于的判断不能 作为循环执行条件
因为浮点数在计算机内部是近似表示的，所以没法直接比较是否相等。这样肯定会有误差。
可取的办法有两个：
1.绕开浮点数的比较
2.比较的时候，取一个很小的范围，如果他们的绝对值差值在这个很小的范围之内，
那么我们认为他们是相等的。
*/
#include <iostream>

double test_sum();
double test_sum1();

int main()
{
	double ret = test_sum1();
	std::cout << ret << std::endl;
	return 0;
}

double test_sum()
{
	double item = 0.0;
	double sum = 0.0;
	for( item = 0.01; item <= 1.0; item += 0.01 ) // 0.01 + 0.02 + ... + 1 = 50.5
		sum += item;
	return sum; // 最终返回49.5，所以是最后一项1.0的比较的时候，没有获得正确结果。浮点数的比较是否相等，不能作为循环继续执行的条件。
}
double test_sum1()
{
	double sum = 0.0;
	for( int i = 1; i <= 100; ++i )
	{
		sum += 1.0 * i / 100;
	}
	return sum; // 50.5,用整数比较的技巧，绕开浮点数比较。
}