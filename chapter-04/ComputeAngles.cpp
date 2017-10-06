/*
这个题目的逻辑不难：
输入：三个点的坐标
计算：
	1.计算三条边的长度
	2.根据余弦定理计算三个角度(这么计算出来的是PI，要换算成角度)
	3.输出三个角度的值

	double cosa = (b*b + c*c - a*a) / (2*b*c);
	看看这是标准的写法，改了半天才发现的。
	之前是这么写的，完全忽略了优先级的概念在
	double cosa = b*b + c*c - a*a / 2*b*c;

	double cosa = 1.0 / 2 / b / c * (b*b + c*c - a*a); // 这么写也是可以的，防止了溢出的可能
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