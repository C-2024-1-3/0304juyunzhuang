#include<iostream>
using namespace std;
int main()
{
	float a = 0, b = 0, c = 0, C = 0;
	cout << "����������" << endl;
	cin >> a >> b >> c;
	C = a + b + c;
	cout << "�ܳ�Ϊ��" << C << endl;
	if (a == b || a == c || b == c) {
		cout << "�ǵ���������" << endl;
	}
	system("pause");
	return 0;
}