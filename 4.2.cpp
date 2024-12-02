#include <iostream>
void swap(double& num1, double& num2) {
    double temp = num1;
    num1 = num2;
    num2 = temp;
}
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}
int main() {
    double numbers[10];
    std::cout << "请输入10个双精度数字：" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }

    bubbleSort(numbers, 10);

    std::cout << "排序后的数字为：" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}