/*
To convert a decimal number d to a hexadecimal is to find the hexadecimal digits
h_n, h_n-1, ... h_0 such that

d = h_n * 16^n + h_n-1 * 16^n-1 ... + h_1 * 16^1 + h_0 * 16^0 ��*��

These decimal digits can be found by successively dividing d by 16 until the quotient is 0.
��Ҳ�ǡ���Rȡ�෨��ԭ��

����ģ��һ�£����ݣ�*��
���� h_0 = d%16
d = d/16 = h_n * 16^n-1 + ... h_1 * 16^0
��Σ�h_1 = d%16
d = d/16 = ...

�����ȥֱ��d = 0���͵õ���h_0, h_1, h_2 ...... h_n�����С�
�������õ��ģ�����������������ں���ȳ�ģ�ͣ�������ջʵ�֡�

*/
#include <iostream>
#include <string>

std::string dec_to_hex( int val );

int main( void )
{
	int val = 0;
	std::cout << "Enter a decimal number: ";
	std::cin >> val;

	std::string ret = dec_to_hex(val);
	std::cout << "The hex number is " << ret << std::endl;

	return 0;
}

std::string dec_to_hex( int val )
{
	std::string ret;
	while( val )
	{
		int d = val%16;
		char c = (d < 10)?static_cast<char>('0' + d):static_cast<char>('A' + d-10);
		ret = c + ret;

		val /= 16;
	}
	return ret;
}