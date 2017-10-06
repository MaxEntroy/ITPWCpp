/*不管你用什么风格，只要你的编码风格确定就好。不要换来换去，一定要确定就好。*/

#include <iostream>
#include <cmath>
#include <iomanip>

const double PI = std::atan(1.0) * 4;

class Circle
{
private:
	double radius_;

public:
	Circle() : radius_(0.0) {}
	Circle( double r ) : radius_(r){}

	double get_radius() const
	{
		return radius_;
	}
	int set_radius( double r )
	{
		radius_ = r;
		return 0;
	}

	double get_area() const
	{
		return PI * radius_ * radius_; 
	}

};

int main( void )
{
	Circle circle1(1.0);
	Circle circle2(25.0);
	Circle circle3(125.0);

	std::cout << "The area of the circle of radius " << circle1.get_radius() << " is " << circle1.get_area() << std::endl;
	std::cout << "The area of the circle of radius " << circle2.get_radius() << " is " << std::fixed << std::setprecision(2) << circle2.get_area() << std::endl;
	std::cout << "The area of the circle of radius " << circle3.get_radius() << " is " << circle3.get_area() << std::endl;

	circle2.set_radius(100);
	std::cout << "The area of the circle of radius " << circle2.get_radius() << " is " << circle2.get_area() << std::endl;

	return 0;
}