/*
�����Ŀ���߼����ѣ�
���룺�����������
���㣺
	1.���������ߵĳ���
	2.�������Ҷ�����������Ƕ�(��ô�����������PI��Ҫ����ɽǶ�)
	3.��������Ƕȵ�ֵ

	double cosa = (b*b + c*c - a*a) / (2*b*c);
	�������Ǳ�׼��д�������˰���ŷ��ֵġ�
	֮ǰ����ôд�ģ���ȫ���������ȼ��ĸ�����
	double cosa = b*b + c*c - a*a / 2*b*c;

	double cosa = 1.0 / 2 / b / c * (b*b + c*c - a*a); // ��ôдҲ�ǿ��Եģ���ֹ������Ŀ���
*/
#include <iostream>
#include <cmath>

int main( void )
{
	double x1 = 0.0, y1 = 0.0;
	double x2 = 0.0, y2 = 0.0;
	double x3 = 0.0, y3 = 0.0;

	std::cout << "Enter 3 points: ";
	std::cin >> x1 >> y1;
	std::cin >> x2 >> y2;
	std::cin >> x3 >> y3;

	double b = sqrt( pow( fabs( x1 - x3 ), 2 ) + pow( fabs( y1 - y3 ), 2 ) );
	double c = sqrt( pow( fabs( x1 - x2 ), 2 ) + pow( fabs( y1 - y2 ), 2 ) );
	double a = sqrt( pow( fabs( x2 - x3 ), 2 ) + pow( fabs( y2 - y3 ), 2 ) );

	double cosa = (b*b + c*c - a*a) / (2*b*c);
	double cosb = (a*a + c*c - b*b) / (2*a*c);
	double cosc = (b*b + a*a - c*c) / (2*b*a);

	double A = std::acos( cosa );
	double B = std::acos( cosb );
	double C = std::acos( cosc );

	const double PI = atan(1.0)*4;
	A = A*180/PI;
	B = B*180/PI;
	C = C*180/PI;

	std::cout << "The three angles are " << A << " " << B << " " << C << std::endl;

	return 0;
}