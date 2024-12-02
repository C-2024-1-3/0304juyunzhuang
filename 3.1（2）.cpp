#include <iostream>
using namespace std;
void getGCDandLCM(int m, int n, int& gcd, int& lcm) {
    int a = m;
    int b = n;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;  
    lcm = (m * n) / gcd;  
}

int main() {
    int m, n;
    cout << "请输入两个自然数m和n：";
    cin >> m >> n;

    int greatest_common_divisor;
    int least_common_multiple;
    getGCDandLCM(m, n, greatest_common_divisor, least_common_multiple);

    cout << m << "和" << n << "的最大公约数是：" << greatest_common_divisor << endl;
    cout << m << "和" << n << "的最小公倍数是：" << least_common_multiple << endl;

    return 0;
}