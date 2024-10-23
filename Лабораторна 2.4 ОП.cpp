/**
 * Зроблено:
 * Ім'я студента: Пушко Станіслав
 * Група студента: 121
 * Лабораторна 2.4
 */


#include <iostream>
#include <cmath>

 // Функція для обчислення значення
double func(double x) {
    double y;
    if (x <= 2) {
        y = 0;
        for (int i = 1; i <= 4; ++i) {
            y += (2 * x - i) / i;
        }
    }
    else {
        y = x * x;
        double product = 1;
        for (int i = 2; i <= 4; ++i) {
            product *= (x + i);
        }
        y += product;
    }
    return y;
}
int main() {
    double y[18];  // Масив для зберігання значень
    int k = 0;
    double h = 0.4; // Крок
    for (double i = 0; i <= 7; i += h, k++) { // Табулюємо на інтервалі [0;7]
        y[k] = func(i);
    }

    // Вивід результатів
    for (int i = 0; i < k; ++i) {
        std::cout << "x = " << i * h << ", y = " << y[i] << std::endl;
    }

    return 0;
}