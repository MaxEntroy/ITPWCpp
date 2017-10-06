/*
这个题目很有意思。
purchase_amount = 197.55作为输入，tax = 0.06
res = 11.853
但是我现在让你输出11.85怎么办？不能用精度控制输出。

那其实思路也很简单嘛！就是想办法让截断就好了，除了精度控制。那就只能是强制转换才能让精度发生截断。
最后要两位是吧，*100然后强制转换，把0.003截断就好了。然后再除以100

*/
#include <iostream>
using namespace std;

int main( void )
{
	double purchase_amount = 0.0;
	cout << "Enter purchase amount: ";
	cin >> purchase_amount;

	const double ratio = 0.06;
	double tax = purchase_amount * ratio;

	tax = static_cast<int>(tax*100) / 100.0;
	cout << "Sales tax is " << tax << endl;

	return 0;
}