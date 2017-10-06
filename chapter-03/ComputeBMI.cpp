/*
input:
height(m), weight(kg)
process:
	1.进行换换
	2.计算bmi
	3.输出
*/
#include <iostream>

int main( void )
{
	double weight = 0.0;
	std::cout << "Enter weight in pounds: ";
	std::cin >> weight;

	double height = 0.0;
	std::cout << "Enter height in inches: ";
	std::cin >> height;

	const double KILOGRAMS_PER_POUND = 0.45359237;
	const double METERS_PER_INCH = 0.0254;

	double weight_in_kilograms = weight * KILOGRAMS_PER_POUND;
	double height_in_meters = height * METERS_PER_INCH;
	double bmp = weight_in_kilograms / height_in_meters / height_in_meters;

	std::cout << "Your bmp is " << bmp << std::endl;
	if( bmp < 18.5 )
		std::cout << "Underweight" << std::endl;
	else if ( bmp < 25.0 )
		std::cout << "Normal" << std::endl;
	else if( bmp < 30.0 )
		std::cout << "Overweight" << std::endl;
	else
		std::cout << "Obese" << std::endl;

	return 0;
}