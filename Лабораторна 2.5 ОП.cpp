/**
 * Зроблено:
 * Ім'я студента: Пушко Станіслав
 * Група студента: 121
 * Лабораторна 2.5
 */

#ifndef LIST_H
#define LIST_H

// Структура для зберігання елементів типу char в зв'язаному списку
struct ListNode {
    char data;
    ListNode* next;
};

// Inline-функція для перевірки, чи дорівнює значення елементу 'a'
inline bool isEqualToA(ListNode* node) {
    return node->data == 'a';
}

#endif // LIST_H
#include <iostream>

// Підпрограма 1: Додає елемент до кінця списку
void addToEnd(ListNode*& head, char value) {
    ListNode* newNode = new ListNode{ value, nullptr };
    if (!head) {
        head = newNode;
    }
    else {
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Підпрограма 2: Додає елемент до початку списку
void addToStart(ListNode*& head, char value) {
    ListNode* newNode = new ListNode{ value, head };
    head = newNode;
}

// Функція для друку списку
void printList(const ListNode* head) {
    const ListNode* temp = head;
    while (temp) {
        std::cout << temp->data << ' ';
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Формування першого списку
    ListNode* firstList = nullptr;
    char elements1[] = { 'b', 'c', 'd', 'e', 'f' };
    for (char element : elements1) {
        addToEnd(firstList, element);
    }
    std::cout << "Перший список: ";
    printList(firstList);

    // Формування другого списку
    ListNode* secondList = nullptr;
    char elements2[] = { 'x', 'y', 'z' };
    for (char element : elements2) {
        addToStart(secondList, element);
    }
    std::cout << "Другий список: ";
    printList(secondList);

    // Перевірка значень елементів першого списку
    ListNode* temp = firstList;
    while (temp) {
        if (isEqualToA(temp)) {
            std::cout << "Знайдено 'a' у першому списку." << std::endl;
        }
        temp = temp->next;
    }

    // Видалення списків
    while (firstList) {
        ListNode* toDelete = firstList;
        firstList = firstList->next;
        delete toDelete;
    }
    while (secondList) {
        ListNode* toDelete = secondList;
        secondList = secondList->next;
        delete toDelete;
    }

    return 0;
}
