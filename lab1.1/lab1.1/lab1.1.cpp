#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int A[10] = { 3, 1, 4, 7, 5, 8, 9, 2, 6, 10 };
    int i = 0, max = A[0], min = A[0], diff;

    for (i = 0; i < 10; i++) {
        if (max < A[i]) {
            max = A[i];
        }
    }

    for (i = 0; i < 10; i++) {
        if (min > A[i]) {
            min = A[i];
        }
    }

    diff = max - min;
    printf("Разность элементов = %d\n", diff);

};
