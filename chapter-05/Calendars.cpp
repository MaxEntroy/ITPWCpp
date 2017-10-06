/*
input:
输入 年份、月份

process:
	1.计算当前月份之前总天数 total_days
	2.判断当前月份的天数 count
	3.循环: i < count, 初始化第一个天的星期
		3.1.判断：如果该月的天数 % 7 == 0， 换行
		3.2.打印该月的天数

output:


这个题目算是搞定了，感觉我去年也做过一次。但是感觉很明显，去年做的时候感觉比较难。
想了好久。
很明显，经过一年程序设计的训练。我的思路变得更加清晰，解决问题的能力增强。

其实，看我上面的逻辑。这个题目的思路还是非常简单的。
最最主要的一个操作是，统计当前天数到原点日期的天数。不难。
然后就是调整格式了。

再调整格式的时候，由于我受过acc的训练，所以在调格式的时候可以避免很多问题，因为格式完全是用数字控制的。所以非常清晰。

说到底，这个题目的本质还是求出当前年，当前月的第一天是星期几的问题。

*/
#include <iostream>
#include <string>
#include <iomanip>

const int days_of_month[][13] = {  { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},   // 365
								   { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} }; // 366

const std::string month_arr[13] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "Novemver", "December" };

const std::string weekday[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };


bool is_leap_year( int year );
void display_calendar( int year, int month );

int main()
{
	int year = 0, month = 0;
	std::cout << "Enter year and month: ";
	std::cin >> year >> month;
	display_calendar( year, month );

	return 0;
}

bool is_leap_year( int year )
{
	return (!(year%4) && (year%100)) || !(year%400);
}
void display_calendar( int year, int month )
{
	/* get total days */
	int total_days = 0;
	for( int y = 1; y < year; ++y )
	{
		if( is_leap_year(y) )
			total_days += 366;
		else
			total_days += 365;
	}
	for( int i = 1; i < month; ++i )
	{
		total_days += days_of_month[is_leap_year(year)][i];
	}

	int indicator = (total_days + 1) % 7; // 当前日期的星期

	// print the title
	std::string title_line;
	title_line += std::string(1 + 3 + 7*2, ' ' );
	title_line += month_arr[month];

	std::string separate_line( 7*6 + 3 + 2, '-' );
	
	std::string week_day_line;
	for( int i = 0; i < 7; ++i )
	{
		if(!i)
			week_day_line += std::string(1, ' ');
		else
			week_day_line += std::string(4, ' ');
		week_day_line += weekday[i];
	}

	std::cout << title_line << " " << year << std::endl;
	std::cout << separate_line << std::endl;
	std::cout << week_day_line << std::endl;

	/* print the table */
	for( int i = 0; i < indicator; ++i ) // 打出前导空格
	{
		if(!i)
			std::cout << std::string(1+3, ' ');
		else
			std::cout << std::string(4+3, ' ');
	}

	int count = days_of_month[is_leap_year(year)][month];
	for( int i = 1; i <= count; ++i ) // 打出该月日历
	{
		if( !indicator )
		{	
			std::cout << std::endl;
			std::cout << std::setw(1+3) << i;
		}
		else
			std::cout << std::setw(4+3) << i;
		
		indicator = (indicator + 1)%7;
	}

	std::cout << std::endl;

}