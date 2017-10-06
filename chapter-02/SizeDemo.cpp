#include <iostream>
using namespace std;

int main( void )
{
	cout << "The size of int is " << sizeof(int) << " bytes." << endl;
	cout << "The size of long is " << sizeof(long) << " bytes." << endl;
	cout << "The size of float is " << sizeof(float) << " bytes." << endl;
	cout << "The size of double is " << sizeof(double) << " bytes." << endl;

	double area = 5.4;
	cout << "The size of area is " << sizeof(area) << " bytes" << endl;

	int age = 30;
	cout << "The size of age is " << sizeof(age) << " bytes" << endl;

	return 0;
}