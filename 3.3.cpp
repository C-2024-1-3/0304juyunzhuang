#include "mytemperature.h"
#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius\n";
    std::cout << std::fixed << std::setprecision(2);
    for (double c = 40.0; c >= 31.0; c -= 1.0) {
        double f = celsius_to_fah(c);
        std::cout << std::setw(7) << c << "\t\t" << std::setw(7) << f << "\t\t|\t";
        double f2 = 120.0 - (40.0 - c) * 10.0;
        double c2 = fahrenheit_to_cels(f2);
        std::cout << std::setw(7) << f2 << "\t\t" << std::setw(7) << std::setprecision(2) << c2 << "\n";
    }
    return 0;
}