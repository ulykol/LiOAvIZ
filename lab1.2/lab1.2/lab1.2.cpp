#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale>

int main(void)
{
    srand(time(0));
    setlocale(LC_ALL, "rus");
    const int N = 10;
    int A[N], i;

    printf("Заполнение массива случайными числами:\n");
    for (i = 0; i < N; i++)
    {
        A[i] = rand() % 51 - 25;
        printf("%4d", A[i]);
    }

    system("pause>0");
}
