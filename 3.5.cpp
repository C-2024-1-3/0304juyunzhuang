#include <iostream>
int peach_count(int n) {
    if (n == 10) {
        return 1;
    }
    return (peach_count(n + 1) + 1) * 2;
}
int main() {
    int total_peaches = peach_count(1);
    std::cout << "��һ����ӹ�ժ�� " << total_peaches << " �����ӡ�" << std::endl;
    return 0;
}