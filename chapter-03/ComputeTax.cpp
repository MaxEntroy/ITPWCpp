/*
input：
filing_status
taxable income

process:
	1.判断：filing_status的值
		1.1.执行single函数
		1.2 married or widow函数
		1.3.married filing separately函数
		1.4.head of household函数
	2.输出返回的纳税值

计算所得税函数的逻辑：
第一种办法就是按照各个等级分类之后，分别计算。这么做逻辑清楚，不过代码有冗余。
第二种办法，就是上来每一级每一级的测试，如果这一级能过去，在到下一等级。否则，本等级计算完毕之后直接返回。

写代码之前设计好，只要方法可行。
且设计完毕，坚持仔细的把代码写完就好了。不要再换思路了。所以设计完成，代码就定了。只要仔细写完就好了。
*/
#include <iostream>

double cal_tax_of_single( double taxable_income );
double cal_tax_of_single1( double taxable_income );
double cal_tax_of_married_jointly_or_qualifying_widow( double taxable_income );
double cal_tax_of_married_separately( double taxable_income );
double cal_tax_of_head_of_household( double taxable_income );

int main( void )
{
	int filing_status = 0;
	std::cout << "(0-single filer, 1-married jointly or qualifying widow(er)," << std::endl
		<< "2-married separately, 3-head of household)" <<std::endl;
	std::cout << "Enter the filing status: ";
	std::cin >> filing_status;

	double taxable_income = 0.0;
	std::cout << "Enter the taxable income: ";
	std::cin >> taxable_income;

	double tax = 0.0;
	switch( filing_status )
	{
		case 0: tax = cal_tax_of_single( taxable_income ); break;
		case 1: tax = cal_tax_of_married_jointly_or_qualifying_widow( taxable_income );break;
		case 2: tax = cal_tax_of_married_separately( taxable_income );break;
		case 3: tax = cal_tax_of_head_of_household( taxable_income );break;
		default: std::cout << "Wrong filing_status!" << std::endl; break;
	}

	std::cout << "Tax is " << static_cast<int>(tax*100)/100.0 << std::endl;

	return 0;
}

double cal_tax_of_single( double taxable_income )
{
	double tax = 0.0;
	if( taxable_income <= 8350.0 )
	{
		tax = taxable_income * 0.1;
	}
	else if ( taxable_income <= 33950.0 )
	{
		tax += 8350.0 * 0.1;
		tax += (taxable_income - 8350.0) * 0.15;
	}
	else if( taxable_income <= 82250.0 )
	{
		tax += 8350.0 * 0.1;
		tax += ( 33950.0 - 8350.0 ) * 0.15;
		tax += ( taxable_income - 33950.0 ) * 0.25;
	}
	else if( taxable_income <= 171550.0 )
	{
		tax += 8350.0 * 0.1;
		tax += ( 33950.0 - 8350.0 ) * 0.15;
		tax += ( 82250.0 - 33950.0 ) * 0.25;
		tax += ( taxable_income - 82250.0 ) * 0.28;
	}
	else if( taxable_income <= 372950.0 )
	{
		tax += 8350.0 * 0.1;
		tax += ( 33950.0 - 8350.0 ) * 0.15;
		tax += ( 82250.0 - 33950.0 ) * 0.25;
		tax += ( 171550.0 - 82250.0 ) * 0.28;
		tax += ( taxable_income - 171550.0 ) * 0.33;
	}
	else
	{
		tax += 8350.0 * 0.1;
		tax += ( 33950.0 - 8350.0 ) * 0.15;
		tax += ( 82250.0 - 33950.0 ) * 0.25;
		tax += ( 171550.0 - 82250.0 ) * 0.28;
		tax += ( 372950.0 - 171550.0 ) * 0.33;
		tax += ( taxable_income - 372950.0 ) * 0.35;
	}
	return tax;
}
double cal_tax_of_married_jointly_or_qualifying_widow( double taxable_income )
{
	return 0.0;
}
double cal_tax_of_married_separately( double taxable_income )
{
	return 0.0;
}
double cal_tax_of_head_of_household( double taxable_income )
{
	return 0.0;
}

double cal_tax_of_single1( double taxable_income )
{
	double tax = 0.0;
	if( taxable_income <= 8350.0 )
	{
		tax = taxable_income * 0.1;
		return tax;
	}
	else
		tax += 8350.0 * 0.1;

	if( taxable_income <= 33950.0 )
	{
		tax += ( taxable_income - 8350.0 ) * 0.15;
		return tax;
	}
	else
		tax += ( 33950.0 - 8350.0 ) * 0.15;

	if( taxable_income <= 82205.0 )
	{
		tax += ( taxable_income -33950.0 ) * 0.25;
		return tax;
	}
	else 
		tax += ( 82250.0 - 33950.5 ) * 0.25;
	
	if( taxable_income <= 171550.0 )
	{
		tax += ( taxable_income - 82250.0  ) * 0.28;
		return tax;
	}
	else 
		tax += ( 171550.0- 82250.0  ) * 0.28;

	if( taxable_income <= 372950.0 )
	{
		tax += ( taxable_income - 171550.0  ) * 0.33;
		return tax;
	}
	else 
		tax += ( 372950.0 - 171550.0 ) * 0.33;

	tax += ( taxable_income - 372950.0 ) * 0.35;
	return tax;
}