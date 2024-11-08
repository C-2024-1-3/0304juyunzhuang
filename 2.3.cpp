#include<iostream>
using namespace std;
int main()
{
	float a = 0, b = 0, c = 0, C = 0;
	cout << "输入三条边" << endl;
	cin >> a >> b >> c;
	C = a + b + c;
	cout << "周长为：" << C << endl;
	if (a == b || a == c || b == c) {
		cout << "是等腰三角形" << endl;
	}
	system("pause");
	return 0;
}