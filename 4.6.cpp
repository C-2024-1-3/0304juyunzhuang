#include<iostream>
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch - 'A' + 'a';
            }
            counts[ch - 'a']++;
        }
    }
}
int main() {
    const int MAX_LENGTH = 100;  
    char s[MAX_LENGTH];
    int counts[26] = { 0 };  

    std::cout << "������һ���ַ�����" << std::endl;
    std::cin.getline(s, MAX_LENGTH);

    count(s, counts);

    std::cout << "�ַ�������ĸ���ֵĴ������£�" << std::endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            char ch = 'a' + i;  
            std::cout << ch << ": " << counts[i] << std::endl;
        }
    }

    return 0;
}