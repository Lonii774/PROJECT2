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