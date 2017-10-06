#include <iostream>

int factorial(int n);

int main(){

	std::cout << "Please enter a nonnegative integer: ";
	int n = 0;
	std::cin >> n;

	int res = factorial( n );
	std::cout << "Factorial of " << n << " is " << res << std::endl;

	return 0;
}

int factorial(int n){
	if(!n) return 1; // Base case
	else return n*factorial(n-1); // Recursive call
}