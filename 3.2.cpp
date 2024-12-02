#include<iostream>
using namespace std;
bool is_prime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
            break;
        }
    }
    return true;	
}
int main() {
    int num = 0;
    int t = 0;
    while ( t < 200) {
        if (is_prime(num)) {
            cout << num<<" ";
            t++;
        }
        if (t%10==0) {
            cout << endl;
        }
        num++;
    }



}
