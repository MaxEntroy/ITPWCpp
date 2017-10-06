#include <iostream>
#include <vector>

int fib(int n);
int fib1(int n);

int main(){

	std::cout << "Enter an index for the Fibonacci number: ";
	int number = 0;
	std::cin >> number;

	int res = fib(number);
	std::cout << "Fibonacci number at index " << number << " is " << res << std::endl;

	return 0;
}

int fib(int n){
	if( 0 == n ) return 0;
	else if( 1 == n ) return 1;
	else return fib( n-1 ) + fib( n-2 );
}

int fib1(int n){
	std::vector<int> dp(n, 0);
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2; i < n; ++i){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n-1];
}