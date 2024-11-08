#include<iostream>
using namespace std;
int main()
{
	char a; 
	cin >> a;
	if (a >= 97 && a <= 122) {
		a = a - 32;
		cout << a << endl;
	}
	else {
		a = a + 1;
		int b = a;
		cout << b << endl;
	}
	
	system("pause");
	return 0;
}