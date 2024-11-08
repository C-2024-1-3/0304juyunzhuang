#include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0, max = 0, min = 0,yu=1,a=0,b=0;
	cin >> num1 >> num2;
	a = num1;
	b = num2;
	while (yu != 0) {
		yu = num1 % num2;
		num1 = num2;
		num2 = yu;
	}
	max = num1;
	cout << "最大公约数为："<<max << endl;
	min = a * b / max;
	cout << "最小公倍数为：" << min << endl;
	system("pause");
	return 0;
}