

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
/**
 * Зроблено:
 * Ім'я студента: Пушко Станіслав
 * Група студента: 121
 * Лабораторна 1.5
 */
int main()
{
	SetConsoleOutputCP(CP_UTF8);

	std::locale::global(std::locale(""));

// Частина 1

	cout << "Частина 1" << endl;
	cout << "Перші значення: " << endl;

	double a1 = 54.9;
	double b1 = 82.1;
	int c1 = 74;
	int d1 = 74;

	// <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
		//  ! (  !    (a <= b)    ||   (   empty   (c == d)))
	bool res1 = !(!(a1 <= b1) || (!(c1 == d1)));
	cout << "Результат: " << boolalpha << res1 << endl;

	cout << "Інші значення: " << endl;

	int a2 = 49;
	int b2 = 58;
	double c2 = 8.8;
	double d2 = 6.6;

	// <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
		//  ! (  !    (a <= b)    ||   (   empty   (c == d)))
	bool res2 = !(!(a2 <= b2) || (!(c2 == d2)));
	cout << "Результат: " << boolalpha << res2 << endl;

// Частина 2
	cout << "Частина 2" << endl;
	int A = 41;
	int B = -13;
	int C = 22;
	int D = -593;
	int E = 12;
	float F;


	// A <БО1> <УО> B <АО1> <СО> C <ОВ> D <АО2> E <БО2> <БазО> F
	   // A & + B / * C > D + E << sizeof F
	bool res3 = ((A & + B) / * &C) > (D + (E << sizeof(F)));
	cout << "Результат: " << boolalpha << res3 << endl;

	return 0;

}


