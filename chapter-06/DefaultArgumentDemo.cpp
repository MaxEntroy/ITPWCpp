#include <iostream>
#include <iomanip>
#include <cmath>

const double PI = 4*std::atan(1.0);

int print_area( double radius = 1.0 )
{
	double area = PI * radius * radius;
	std::cout << std::fixed << std::setprecision(2)
		<< area << std::endl;

	return 0;
}

int main( void )
{
	print_area();
	print_area(4);

	return 0;
}
