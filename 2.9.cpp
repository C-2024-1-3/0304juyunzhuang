#include<iostream>
using namespace std;
int main()
{
	double price = 0.8,  money = 0,avg=0;
	int day = 0,sum=0,num=2;
	while (sum < 100) {
		sum = sum + num ;
		num = num * 2;
		day++;
	}
	sum = sum - num / 2;
	money = price * sum;
	avg = money / day;
	cout << "每天平均花的钱为：" << avg << endl;
	system("pause");
	return 0;
}