#include <iostream>
#include <string>
#include <windows.h>

bool isValid(const std::string& input) {
    int state = 0; // Початковий стан

    for (size_t i = 0; i < input.size(); ++i) {
        char c = input[i];

        switch (state) {
        case 0: // Приймає символи "A..M" (перша підпослідовність)
            if (c >= 'A' && c <= 'M') {
                state = 0; // Залишаємось у стані 0 для прийому "A..M"
            }
            else if (c >= '0' && c <= '5') {
                state = 1; // Переходимо до прийому чисел (друга підпослідовність)
            }
            else {
                return false; // Помилка
            }
            break;

        case 1: // Приймає цифру після "A..M" або після "="
            if (c == '=') {
                state = 2; // Очікуємо на цифру після "="
            }
            else {
                return false; // Помилка, якщо йде ще одна цифра без "="
            }
            break;

        case 2: // Очікує цифру після "="
            if (c >= '0' && c <= '5') {
                state = 1; // Повертаємося до стану прийому цифр
            }
            else {
                return false; // Помилка
            }
            break;

        default:
            return false; // Неправильний стан
        }
    }

    // Перевірка кінцевого стану: повинні бути в стані 1, де прийняли цифру без очікування "="
    return (state == 1);
}

int main() {

    SetConsoleOutputCP(CP_UTF8);

    std::locale::global(std::locale(""));

    std::string input;
    std::cout << "Введіть ланцюжок: ";
    std::cin >> input;

    if (isValid(input)) {
        std::cout << "Ланцюжок належить мові L(V)." << std::endl;
    }
    else {
        std::cout << "Помилка: ланцюжок не належить мові L(V)." << std::endl;
    }

    return 0;
}