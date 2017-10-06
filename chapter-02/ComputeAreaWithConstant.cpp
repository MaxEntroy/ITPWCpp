#include <iostream>
using namespace std;

int main( void )
{
	const double PI = 3.141592;

	// Read in radius
	double radius;
	cout << "Enter a radius: ";
	cin >> radius;

	// Compute area
	double area = PI * radius * radius;

	// Display the area
	cout << "The area is : " << area << endl;
}