#include <iostream>
using namespace std;

int main( void )
{
	double fabrenheit = 0.0;
	cout << "Enter a degree in fabrenheit: ";
	cin >> fabrenheit;

	double celsius = ( 5.0 / 9 )*(fabrenheit - 32);

	cout << "Fabrenheit " << fabrenheit << " is " << celsius << " in Celsius" << endl;

	return 0;
}