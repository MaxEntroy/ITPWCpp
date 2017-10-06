#include <iostream>

/* Function Declaration */
int max( int num1, int num2 );
double max( double num1, double num2 );
double max( double num1, double num2, double num3 );
 
int main( void )
{
    std::cout << "The maximum between 3 and 4 is " << max(3, 4) << std::endl;
    std::cout << "The maximum between 3.0 and 5.4 is " << max(3.0, 5.4) << std::endl;
    std::cout << "The maximum between 3.0, 5.4 and 10.14 is " << max(3.0, 5.4, 10.14) << std::endl;
 
    return 0;
}

/* Function Definition */
int max( int num1, int num2 )
{
    return ( num1 > num2 )?num1:num2;
}
double max( double num1, double num2 )
{
    return ( num1 > num2 )?num1:num2;
}
double max( double num1, double num2, double num3 )
{
    double t = (num1 > num2)?num1:num2;
    return (t > num3)?t:num3;
}