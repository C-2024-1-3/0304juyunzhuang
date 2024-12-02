#include<iostream>
using namespace std;
int count1(int num1, int num2) {
	int max = 0, yu = 1;
	int a = num1;
	int b = num2;
	while (yu != 0) {
		yu = num1 % num2;
		num1 = num2;
		num2 = yu;
	}
	max = num1;
	return max;
}
int count2(int num1, int num2) {
	int max = 0,min=0, yu = 1;
	int a = num1;
	int b = num2;
	while (yu != 0) {
		yu = num1 % num2;
		num1 = num2;
		num2 = yu;
	}
	max = num1;
	min = a * b / max;
	return min;
}

int main()
{
	int num1 = 0, num2 = 0, max = 0, min = 0, yu = 1, a = 0, b = 0;
	cin >> num1 >> num2;
	
	cout << "最大公约数为：" << count1(num1, num2) << endl;
	
	cout << "最小公倍数为：" << count2(num1, num2) << endl;
	system("pause");
	return 0;
}