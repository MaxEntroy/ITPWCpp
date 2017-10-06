/*
IPO:
input:

total_interest, total_loan, total_years

process:
	1.���������ʣ�����������
	2.���������ʡ��ܴ�����Ŀ��������������ÿ�¸���ܸ��
output:
	ÿ�¸���ܸ���

û���õ��ر�� DS + AL

*/
#include <iostream>
#include <cmath>
using namespace std;

int main( void )
{
	// variable definition
	double total_interest = 0.0, total_loan = 0.0;
	int total_years = 0;
	
	// input
	cout << "Enter annual interest rate, for example 7.25: ";
	cin >> total_interest;
	cout << "Enter number of years as an integer, for example 5: ";
	cin >> total_years;
	cout << "Enter loan amount, for example 120000.95: ";
	cin >> total_loan;

	// process
	double monthly_interest = total_interest / 1200;

	double monthly_payment = ( total_loan * monthly_interest ) / ( 1 - ( 1 / pow( 1 + monthly_interest , 12 * total_years ) ) );
	double total_payment = monthly_payment * total_years *12;

	// output
	cout << "The monthly payment is " << static_cast<int>(monthly_payment*100) / 100.0 << endl;
	cout << "The monthly payment is " << static_cast<int>(total_payment*100) / 100.0 << endl;


	return 0;
}