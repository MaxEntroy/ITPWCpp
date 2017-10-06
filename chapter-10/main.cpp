#include "CircleWithStaticDataFields.h"
#include <iostream>
int main( void ){
	std::cout << "Number of circle objects created: "
		<< Circle::get_number_of_objects() << std::endl;

	Circle circle1;
	std::cout << "The area of the circle of the radius " << circle1.get_radius() << " is " 
		<< circle1.get_area() << std::endl;
	std::cout << "Number of circle objects created: "
		<< Circle::get_number_of_objects() << std::endl;

	Circle circle2(1.0);
	std::cout << "The area of the circle of the radius " << circle2.get_radius() << " is " 
		<< circle2.get_area() << std::endl;
	std::cout << "Number of circle objects created: "
		<< Circle::get_number_of_objects() << std::endl;

	Circle circle3(3.3);
	std::cout << "The area of the circle of the radius " << circle3.get_radius() << " is " 
		<< circle3.get_area() << std::endl;
	std::cout << "Number of circle objects created: "
		<< Circle::get_number_of_objects() << std::endl;

	std::cout << "circle1.get_number_of_objects() returns " << circle1.get_number_of_objects() << std::endl; // Circle::get_number_of_objects() 这种是建议写法，读者能轻易知道这是静态成员函数
	std::cout << "circle2.get_number_of_objects() returns " << circle2.get_number_of_objects() << std::endl;

	return 0;
}