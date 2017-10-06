/*
���õ������Ҫ�������漸�仰��
1.c++ provides a special type of variable - a reference variable - which can be used as a funcion parameter
to reference the original variable.
2.A reference variable is an alias for another variable.

�������ݣ�
3.Paremeters can be passed by reference, which makes the formal paremeter an alias of the actual argument.
4.Semantically, pass-by-reference can be described as pass-by-sharing.
5.Pass-by-value passes the value to an independent variable and pass-by-reference shares the same variable.
6.When you pass an argument by reference, the argument must be a variable. When you pass an argument by value, the argument can be a literal, a variable, an expression, or even the return value of another fucntion.

�������õ�ʵ�֣���û���ἰ���Ҿ��ã��϶���ָ���йء�
*/
#include <iostream>

int increment( int n );
 
int main()
{
	int x = 1;
	std::cout << "Before the call, x is " << x << std::endl;
	increment(x);
	std::cout << "After the call, x is " << x << std::endl;
	return 0;
}

int increment( int n )
{
	n++;
	std::cout << "\t n inside the function is " << n << std::endl;

	return 0;
}