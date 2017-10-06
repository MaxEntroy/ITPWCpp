#include <iostream>
using namespace std;

int main( void )
{
	double radius = 0.0;
	
	cout << "Enter a radius: ";
	cin >> radius;

	double area = radius * radius * 3.14159;

	cout << "The area is " << area << endl;

	return 0;
}