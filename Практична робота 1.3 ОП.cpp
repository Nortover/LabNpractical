﻿// Практична робота 1.3 ОП.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <windows.h>
#include <iostream>

/**
 * Зроблено:
 * Ім'я студента: Пушко Станіслав
 * Група студента: 121
 * Практична 1.3
 */

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	std::locale::global(std::locale(""));

// Завдання 1

	float num1, num2;

	std::cout << "Завдання 1: " << std::endl;
	
	std::cout << "Введіть число А: " << std::endl;
	std::cin >> num1;

	std::cout << "Введіть число В: " << std::endl;
	std::cin >> num2;

	float mul = num1 * num2;

	if (mul < 0) {

		mul = mul * 2;
		std::cout << "Добуток менше 0: "; std::cout << mul << std::endl;

	}
	else {

		mul = mul * 1.5;
		std::cout << "Добуток більше 0: "; std::cout << mul << std::endl; std::cout << " " << std::endl;

	}
	
// Завдання 2

	float A, B, C;
	std::cout << "Завдання 2: " << std::endl;

	std::cout << "Введіть число А: " << std::endl;
	std::cin >> A;

	std::cout << "Введіть число B: " << std::endl;
	std::cin >> B;

	std::cout << "Введіть число C: " << std::endl;
	std::cin >> C;

	if (A < (B + C), B < (A + C), C < (A + B)) {

		std::cout << "Ці довжини можуть бути сторонами трикутника" << std::endl;

	}

	else {

		std::cout << "Ці довжини НЕ можуть бути сторонами трикутника" << std::endl;

	}

	return 0;

}

