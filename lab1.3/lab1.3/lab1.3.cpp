#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int N;

	printf_s("Введите размерность массива: ");
	scanf_s("%d", &N);

	int* A = (int*)calloc(N, sizeof(int));

	for (int i = 0; i < N; i++)
	{
		printf_s("memory[%d] = ", i);
		scanf_s("%d", A + i);
	}

	printf("\n");

	printf("Полученный массив: ");
	for (int i = 0; i < N; i++)
	{
		printf_s("%3d", *(A + i));
	}

	system("pause>0");

}
