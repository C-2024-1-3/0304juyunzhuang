#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; ++i) {
        char ch = hexString[i];
        int digit;
        if (isdigit(ch)) {
            digit = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;
        }
        else {
            return -1; 
        }
        result = result * 16 + digit;
    }
    return result;
}

int main() {
    char hexStr[100];
    cout << "������ʮ�������ַ���: ";
    cin >> hexStr;
    int decimal = parseHex(hexStr);
    if (decimal != -1) {
        cout << "ת�����ʮ������Ϊ: " << decimal << endl;
    }
    else {
        cout << "�����ʮ�������ַ��������Ƿ��ַ������������롣" << endl;
    }
    return 0;
}