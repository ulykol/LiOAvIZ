#include <iostream>
#include <ctime>
#include <stdio.h>
#include <locale>

int main(void)
{
    srand(time(0));
    setlocale(LC_ALL, "rus");
    int i, N, a;
    printf("Введите размерность массива: ");
    scanf_s("%d", &N);
    printf("Полученный массив: ");
    for (i = 0; i < N; i++)
    {
        a = rand() % +40;
        printf("%4d", a);
    }
    system("pause>0");
}
