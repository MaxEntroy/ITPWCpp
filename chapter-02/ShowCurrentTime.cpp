#include <iostream>
#include <ctime>
using namespace std;

int main( void )
{
	int total_seconds = time(0);
	cout << total_seconds << endl;

	int current_seconds = total_seconds % 60;
	int total_minutes = total_seconds / 60;


	int current_minutes = total_minutes % 60;
	int total_hours = total_minutes / 60;

	int current_hours = total_hours % 24;

	cout << "Current time is " << current_hours << ":" << current_minutes << ":" << current_seconds << " GMT" << endl;

	return 0;
}