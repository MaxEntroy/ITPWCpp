/*
�����Ŀ������ݣ������Ф��
ע����������Ф�Ĺ�ϵ����Ϊ��������ʼ����ݶ�Ӧ��ʼ����Ф��

4��rat

*/


#include <iostream>
#include <string>
int main()
{
	int year = 0;
	std::cout << "Enter a year: ";
	std::cin >> year;
	std::string zodiac;
	switch( year % 12 )
	{
		case 0: zodiac = "monkey"; break;
		case 1: zodiac = "rooster"; break;
		case 2: zodiac = "dog"; break;
		case 3: zodiac = "pig"; break;
		case 4: zodiac = "rat"; break;
		case 5: zodiac = "ox"; break;
		case 6: zodiac = "tiger"; break;
		case 7: zodiac = "rabbit"; break;
		case 8: zodiac = "dragon"; break;
		case 9: zodiac = "snake"; break;
		case 10: zodiac = "horse"; break;
		case 11: zodiac = "sheep"; break;
		default:break;
	}
	std::cout << zodiac << std::endl;
	return 0;
}