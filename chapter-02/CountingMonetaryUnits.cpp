/*
input:
total_money
process:
	1.换算成分
	2.计算 dollar = total_money / 100;
	3.计算 remain_money = total_money % 100;
	4.计算 quarters = remain_money / 25;
	5.计算 remain_money = remain_money % 25;
	6.计算 nickles = remain_money / 5;
	7.计算 remain_money = remain_money % 5;
	8.计算 pennies = remain_money / 1;
output:


*/


#include <iostream>
using namespace std;

int main( void )
{
	double total_money = 0.0;

	// input
	cout << "Enter an amount in double, for example 11.56: ";
	cin >> total_money;

	int total_money_cents = static_cast<int>( total_money * 100 );

	// process
	int dollars = total_money_cents / 100;
	int remain_money = total_money_cents % 100;
	int quarters = remain_money / 25;
	remain_money = remain_money % 25;
	int dimes = remain_money / 10;
	remain_money = remain_money % 10;
	int nickles = remain_money / 5;
	remain_money = remain_money % 5;
	int pennies = remain_money / 1;

	// output
	cout << "Your amount " << total_money << " consists of" <<endl;
	cout << dollars << " dollars" << endl;
	cout << quarters << " quarters" << endl;
	cout << dimes << " dimes" << endl;
	cout << nickles << " nickles" << endl;
	cout << pennies << " pennies" << endl;

	return 0;
}