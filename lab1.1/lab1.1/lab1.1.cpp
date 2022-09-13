#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int A[10] = { 3, 6, 2, 8, 5, 9, 4, 1, 7, 10 };
    int i = 0, max = A[0], min = A[0], diff;

    printf("Исходный массив: \n");
    for (i = 0; i < 10; i++) {
        printf("%3d", A[i]);
    }

    for (i = 0; i < 10; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    for (i = 0; i < 10; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    printf("\n\nМаксимальный элемент массива:  %d ", max);
    printf("\n\nМинимальный элемент массива:  %d ", min);

    diff = max - min;
    printf("\n\nРазность элементов массива = %d ", diff);
    system("pause>0");
}
