﻿/**
 * Зроблено:
 * Ім'я студента: Пушко Станіслав
 * Група студента: 121
 * Лабораторна 2.1
 */

#include <iostream>

int main()
{
    int arr1[10];
    int arr2[10];
    int arr3[10];
   
    //заповнюємо перший масив
    for (int i = 0; i < 10; i++)
    {
        arr1[i] = 62 + 3 * i;
    }
    //заповнюємо другий масив
    for (int i = 0; i < 10; i++)
    {
        arr2[i] = 74 - i;
    }
    //Ініціювання третьої змінної рівними значеннями двох попередніх змінних
    int k = 0; // кількість рівних значень в першому та другому масивах
    for (int i = 0; i < 10; i++)//зовнішній цикл, прохід по першому масиву
    {
        for (int j = 0; j < 10; j++)//внутрішній цикл, прохід по другому масиву
        {
            if (arr1[i] == arr2[j])//перевірка на рівність значень в першому та другому масивах
            {
                arr3[k] = arr1[i];//присвоєння значення третьому масиву, яке співпало в перших двох масивах
                k++;//збільшення кількості рівних значень
                break;// вихід з внутрішнього циклу
            }
        }
    }
    //Знайдемо добуток елементів, значення яких більші за 40 в третьому масиві
    int multipl = 1;//задаємо початкове значення для добутку 
    for (int i = 0; i < k; i++)//перебираємо елементи в третьому масиві
    {
        if (arr3[i] > 40)//перевіряємо, що значення елемента більше за 40
        {
            multipl = multipl * arr3[i];//множимо добуток на даний елемент
        }
    }

}

