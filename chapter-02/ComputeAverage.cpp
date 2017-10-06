#include <iostream>
using namespace std;

int main( void )
{
	double number1 = 0.0, number2 = 0.0, number3 = 0.0;
	
	// prompt the user to enter 3 numbers
	cout << "Please input 3 numbers: ";
	cin >> number1 >> number2 >> number3;

	// compute the average
	double average = ( number1 + number2 + number3 ) / 3 ;

	// output the res
	cout << "The average of " << number1 << " " << number2 << " " << number3 << " is "  << average << endl;
	return 0;
}