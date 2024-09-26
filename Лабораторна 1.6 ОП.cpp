// Лабораторна 1.6 ОП.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/**
 * Зроблено:
 * Ім'я студента: Пушко Станіслав
 * Група студента: 121
 * Лабораторна 1.6
 */

#include <iostream>
#include <string>
#include <windows.h>

// Частина 1

std::string caesarEncrypt(const std::string& text, int shift) {
    std::string result = "";

    SetConsoleOutputCP(CP_UTF8);

    std::locale::global(std::locale(""));
     
    std::cout << "Частина 1: " << std::endl;

    // Зациклити через кожен вхідний символ
    for (char c : text) {
        // Перевірка великої літери
        if (isupper(c)) {
            result += char(int(c + shift - 65) % 26 + 65);
        }
        // Перевірка малої літери
        else if (islower(c)) {
            result += char(int(c + shift - 97) % 26 + 97);
        }
        // Якщо нічого з цього, додати символ
        else {
            result += c;
        }
    }

    return result;
}

int main() {

    SetConsoleOutputCP(CP_UTF8);

    std::locale::global(std::locale(""));

    std::string text;
    int shift;

    std::cout << "Впишіть текст для шифрування ";
    std::getline(std::cin, text);

    std::cout << "Впишіть величину зсуву ";
    std::cin >> shift;

    std::string encryptedText = caesarEncrypt(text, shift);
    std::cout << "Зашифрований текст: " << encryptedText << std::endl;

    // Частина 2
    
    std::cout << "Частина 2: " << std::endl;

    //Опису змінних типів int, float, unsigned short.

    int nA;

    float fltB;

    unsigned short wC;

    //Ініціювання змінних, що описанні в п.1 даного завдання

    nA = 274;

    fltB = 1.001e-2;

    wC = 78;

    //Опису змінних типів double, int, char.

    double dblD;

    int nE;

    char chF;

    //Ініціювання змінних

    //за допомогою неявного приведення типів

    dblD = nA;

    nE = fltB;

    chF = wC;

    //за допомогою явного приведення

    dblD = (double)nA;

    nE = (int)fltB;

    chF = (char)wC;

    //з обходом суворої типізації

    double* pdblD;

    void* pV;

    pV = &nA;

    pdblD = (double*)pV;

    dblD = *pdblD;

    int* pnE;

    pV = &fltB;

    pnE = (int*)pV;

    nE = *pnE;

    char* pchF;

    pV = &wC;

    pchF = (char*)pV;

    chF = *pchF;

    std::cout << "Величина pV: " << pV << std::endl; std::cout << "Величина pchF: " << pchF << std::endl; std::cout << "Величина chF: " << chF << std::endl;

    return 0;
}