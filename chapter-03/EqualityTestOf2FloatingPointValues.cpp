#include <iostream>
#include <cmath>

int main( void )
{
	double x = 1.0 - 0.1 - 0.1 - 0.1 - 0.1 - 0.1;
	if( x == 0.5 )
		std::cout << "x is 0.5" << std::endl;
	else
		std::cout << "x is not 0.5" << std::endl;
/*
Here x is not exactly 0.5, but is very close to 0.5.
You can not reliably test the equality of 2 floating-point values.
However, you can compare whether they are close enough by testing whether the difference of the 2 numbers is less than
some threshold.

You set epsilon to 1e-14 for comparing 2 values of double type and to 1e-7 for comparing 2 values of float type.
*/
	const double EPSILON = 1e-14; 

	if( fabs( x - 0.5 ) < EPSILON )
		std::cout << "x is approximately 0.5" << std::endl;

	return 0;
}