#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double f = 0, c = 0;
	cout << "请输入华氏温度" << endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "摄氏温度为：" << c << endl;
	system("pause");
	return 0;
}