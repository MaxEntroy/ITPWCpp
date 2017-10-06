/*
������֯��ʱ����Ȼ��ά������Է��������ˡ�
������ϣ�ÿ��������һ�ű�
����ö��ÿһ�����ϣ��������������������棬��ôsum������Ӧ��Ȩ�ؾͺá�

ÿ�����ϴ�����Ӧ��λ����1���������顣
���磬set1�������λ��1���������֡�

�����Ŀ���߼���ʵ�൱��ö��5�����ϣ�����ÿ�������൱�ڶ�����Ӧ��λ�����в��ԡ�
�����Щλ����1��������Ӧ��Ȩ�ؾͺá�
*/
#include <iostream>
#include <iomanip>
#include <cctype>
const int maxn = 5;

// weight array
const int weight[maxn] = { 1, 2, 4, 8, 16 };

// table
const int table[maxn][4][4] = { 
	{ 
		{1, 3, 5, 7}, 
		{9, 11, 13, 15}, 
		{17, 19, 21, 23}, 
		{25, 27, 29, 31} 
	},
	
	{ 
		{2, 3, 6, 7}, 
		{10, 11, 14, 15}, 
		{18, 19, 22, 23}, 
		{26, 27, 30, 31} 
	},
	
	{ 
		{4, 5, 6, 7}, 
		{12, 13, 14, 15}, 
		{20, 21, 22, 23}, 
		{28, 29, 30, 31} 
	},
	
	{ 
		{8, 9, 10, 11}, 
		{12, 13, 14, 15}, 
		{24, 25, 26, 27}, 
		{28, 29, 30, 31} },
	
	{ 
		{16, 17, 18, 19}, 
		{20, 21, 22, 23}, 
		{24, 25, 26, 27}, 
		{28, 29, 30, 31}
	}
};

void display_table( const int arr[][4], int n );

int main( void )
{
	int sum = 0;
	for( int i = 0; i < maxn; ++i )
	{
		std::cout << "Is your birthday in Set" << i + 1 << "?" << std::endl;

		// show the table
		display_table( table[i], 4 );

		// get the answer and sum
		char answer;
		std::cout << "Enter N/n for No and Y/y for Yes: ";
		std::cin >> answer;

		if( 'Y' == std::toupper(answer) )
			sum += weight[i];

		if( i != maxn - 1 )
			std::cout << std::endl;
	}
	std::cout << "Your birthday is " << sum << std::endl;

	return 0;
}

void display_table( const int arr[][4], int n )
{
	for( int i = 0; i < n; ++i )
	{
		for( int j = 0; j < 4; ++j )
		{
			std::cout << std::setw(2) << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

/*
5��Ԫ�أ�ÿ��Ԫ�����ű�����㡣
Ȼ��ÿ������ʵ��4����ɣ��м�㡣
ÿ����4��Ԫ����ɣ����ڲ㡣

// table
const int maxn = 5;
const int table[maxn][4][4] = { 
	{ 
		{1, 3, 5, 7}, {9, 11, 13, 15}, {17, 19, 21, 23}, {25, 27, 29, 31} 
	},
	
	{ 
		{2, 3, 6, 7}, {10, 11, 14, 15}, {18, 19, 22, 23}, {26, 27, 30, 31} 
	},
	
	{ 
		{4, 5, 6, 7}, {12, 13, 14, 15}, {20, 21, 22, 23}, {28, 29, 30, 31} 
	},
	
	{ 
		{8, 9, 10, 11}, {12, 13, 14, 15}, {24, 25, 26, 27}, {28, 29, 30, 31} 
	},
	
	{ 
		{16, 17, 18, 19}, {20, 21, 22, 23}, {24, 25, 26, 27}, {28, 29, 30, 31}
	}
};
*/