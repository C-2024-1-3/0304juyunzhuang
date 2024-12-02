#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }

    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }

    return -1;
}
int main() {
    const int MAX_LENGTH = 100;  
    char s1[MAX_LENGTH];
    char s2[MAX_LENGTH];

    cout << "请输入第一个字符串：" << endl;
    cin.getline(s1, MAX_LENGTH);

    cout << "请输入第二个字符串：" << endl;
    cin.getline(s2, MAX_LENGTH);

    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << s1 << " 是 " << s2 << " 的子串，下标为 " << result << endl;
    }
    else {
        cout << s1 << " 不是 " << s2 << " 的子串" << endl;
    }

    return 0;
}