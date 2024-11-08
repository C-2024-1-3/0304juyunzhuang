#include<iostream>
using namespace std;
int main()
{
	float x = 0, y = 0;
	cin >> x;
	if (x>=1) {
		if (x >= 5) { y = x * x; }
		else { y = static_cast<float>(2) / 4 * x + 1; }
	
	}
	else { y = 3 - 2 * x; }
	cout << y << endl;
	system("pause");
	return 0;
}