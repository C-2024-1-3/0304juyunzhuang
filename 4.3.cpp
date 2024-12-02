#include<iostream>
using namespace std;
bool change(bool n) {
	if (n = 0) {
		n = 1;
		return n;
	}
	if (n = 1) {
		n = 0;
		return n;
	}
}
int main() {
	bool state[100] = { 0};
	for (int i = 0; i < 100; i++) {
		for (int j = 1; j< 101; j=j+i+1) {
			state[j] = !state[j];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (state[i]) {
			cout << i << " ";
		}
	}
	return 0;
}