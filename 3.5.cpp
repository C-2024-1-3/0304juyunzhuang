#include <iostream>
int peach_count(int n) {
    if (n == 10) {
        return 1;
    }
    return (peach_count(n + 1) + 1) * 2;
}
int main() {
    int total_peaches = peach_count(1);
    std::cout << "第一天猴子共摘了 " << total_peaches << " 个桃子。" << std::endl;
    return 0;
}