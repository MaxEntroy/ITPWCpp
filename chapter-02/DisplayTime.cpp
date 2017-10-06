#include <iostream>
using namespace std;

int main( void )
{
	int seconds = 0;
	cout << "Please enter seconds: ";
	cin >> seconds;

	int minutes = seconds / 60;
	int remain_seconds = seconds % 60;

	cout << seconds << "seconds is " << minutes << " minutes" << " and " << remain_seconds << " seconds " << endl;

	return 0;
}