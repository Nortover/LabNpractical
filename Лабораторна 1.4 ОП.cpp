// Лабораторна 1.4 ОП.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/**
 * Зроблено:
 * Ім'я студента: Пушко Станіслав
 * Група студента: 121
 * Лабораторна 1.4
 */
int main()
{
// Завдання 1
    unsigned int wA = 9040;
    int nB = -267;
    float fltC = 0.007642;
    double dblD = -1.11e99;

// Завдання 2
    unsigned int* pwA;
    int* pnB;
    float* pfltC;
    double* pdblD;

// Завдання 3
    void* pV;
// Завдання 4
    pwA = &wA;
    pnB = &nB;
    pfltC = &fltC;
    pdblD = &dblD;

// Завдання 5
    *pwA = 9040;
    *pnB = -267;
    *pfltC = 0.007642;
    *pdblD = -1.11e99;

// Завдання 6
    int sizewA = sizeof(wA);
    int sizepwA = sizeof(pwA);

    int sizenB = sizeof(nB);
    int sizepnB = sizeof(pnB);

    float sizefltC = sizeof(fltC);
    float sizepfltC = sizeof(pfltC);

    double sizedblD = sizeof(dblD);
    double sizepdblD = sizeof(pdblD);

//Завдання 7 

    pV = &pwA;


}


