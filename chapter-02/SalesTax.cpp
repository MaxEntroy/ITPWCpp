/*
�����Ŀ������˼��
purchase_amount = 197.55��Ϊ���룬tax = 0.06
res = 11.853
�����������������11.85��ô�죿�����þ��ȿ��������

����ʵ˼·Ҳ�ܼ��������취�ýضϾͺ��ˣ����˾��ȿ��ơ��Ǿ�ֻ����ǿ��ת�������þ��ȷ����ضϡ�
���Ҫ��λ�ǰɣ�*100Ȼ��ǿ��ת������0.003�ضϾͺ��ˡ�Ȼ���ٳ���100

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