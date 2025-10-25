#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    int arr[n];

    // инициализация генератора случайных чисел
    srand(time(NULL));

    // заполняем массив случайными числами
    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // числа от 0 до 99
        printf("%d ", arr[i]);
    }
    printf("\n");

    // сортировка пузырьком
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Отсортированный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//ЛАБОРАТОРНАЯ 2 (списки и использовать готовую реализацию списков из STL)

#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout << "Введите размер списка: ";
    cin >> n;

    // создаем список  для хранения целых чисел
    list<int> lst;

    // инициализация генератора случ чисел
    srand(time(NULL));

    // Заполнение списка случ-ми числами от 0 до 99
    cout << "Исходный список: ";
    for (int i = 0; i < n; i++) {
        int x = rand() % 100;
        lst.push_back(x);  // добавляем элемент в конец списка
        cout << x;
        if (i != n - 1) cout << ", "; // разделяоем числа запятыми
    }
    cout << endl;

    // Сортировка списка по возр-ю с помощью встроенного метода sort()STL
    lst.sort();

    // Вывод отсортированного списка
    cout << "Отсортированный список: ";
    int count = 0;
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it, ++count) {
        cout << *it;
        if (count != n - 1) cout << ", "; // разделяем числа запятыми
    }
    cout << endl;

    return 0;
}


