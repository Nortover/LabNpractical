/**
 * Зроблено:
 * Ім'я студента: Пушко Станіслав
 * Група студента: 121
 * Лабораторна 2.2
 */

#include <iostream>

int main()
{
    enum Names { David, Tom, Andrew, Kate, Mary, Olga };
    struct Student {
        Names name; // 1 компонета
        double avgMark; // 2 компонента
        bool sport; // 3 компонента
    };
    Student myStudents[7];
    myStudents[0] = { Tom, 4.37, true };
    myStudents[1] = { David, 3.58, false };
    myStudents[2] = { Kate, 4.5, true };
    myStudents[3] = { Andrew, 3.9, true };
    myStudents[4] = { Olga, 3.3, false };
    myStudents[5] = { Mary, 4.9, true };
    myStudents[6] = { Andrew, 3.1, false };

    int count = 0;

    for (int i = 0; i < 7; i++) {

        if (myStudents[i].avgMark > 4.5 && myStudents[i].sport == true) // перевірка умов (відмінник, займається спортом)
        {

            count++;

        }

    }

    float percent = float(count) * 100 / 7; // обчислення відсотка студентів
}

