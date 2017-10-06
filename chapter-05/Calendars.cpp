/*
input:
���� ��ݡ��·�

process:
	1.���㵱ǰ�·�֮ǰ������ total_days
	2.�жϵ�ǰ�·ݵ����� count
	3.ѭ��: i < count, ��ʼ����һ���������
		3.1.�жϣ�������µ����� % 7 == 0�� ����
		3.2.��ӡ���µ�����

output:


�����Ŀ���Ǹ㶨�ˣ��о���ȥ��Ҳ����һ�Ρ����Ǹо������ԣ�ȥ������ʱ��о��Ƚ��ѡ�
���˺þá�
�����ԣ�����һ�������Ƶ�ѵ�����ҵ�˼·��ø�����������������������ǿ��

��ʵ������������߼��������Ŀ��˼·���Ƿǳ��򵥵ġ�
������Ҫ��һ�������ǣ�ͳ�Ƶ�ǰ������ԭ�����ڵ����������ѡ�
Ȼ����ǵ�����ʽ�ˡ�

�ٵ�����ʽ��ʱ���������ܹ�acc��ѵ���������ڵ���ʽ��ʱ����Ա���ܶ����⣬��Ϊ��ʽ��ȫ�������ֿ��Ƶġ����Էǳ�������

˵���ף������Ŀ�ı��ʻ��������ǰ�꣬��ǰ�µĵ�һ�������ڼ������⡣

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

	int indicator = (total_days + 1) % 7; // ��ǰ���ڵ�����

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
	for( int i = 0; i < indicator; ++i ) // ���ǰ���ո�
	{
		if(!i)
			std::cout << std::string(1+3, ' ');
		else
			std::cout << std::string(4+3, ' ');
	}

	int count = days_of_month[is_leap_year(year)][month];
	for( int i = 1; i <= count; ++i ) // �����������
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