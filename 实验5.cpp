#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double f = 0, c = 0;
	cout << "�����뻪���¶�" << endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << "�����¶�Ϊ��" << c << endl;
	system("pause");
	return 0;
}