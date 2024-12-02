#include <iostream>
int main() {
    int input_numbers[10];  
    int result_numbers[10]; 
    int count = 0;          

    std::cout << "请依次输入10个数字：" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> input_numbers[i];
    }
    for (int i = 0; i < 10; ++i) {
        bool isNew = true;
        for (int j = 0; j < count; ++j) {
            if (input_numbers[i] == result_numbers[j]) {
                isNew = false;
                break;
            }
        }
        if (isNew) {
            result_numbers[count] = input_numbers[i];
            count++;
        }
    }
    std::cout << "不同的数字为：";
    for (int i = 0; i < count; ++i) {
        std::cout << result_numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}