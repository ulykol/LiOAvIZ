#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <locale.h>

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

	int i, j, rows, cols, ** A;

	printf("Введите количество строк = ");
	scanf_s("%d", &rows);

	printf("Введите количество столбцов = ");
	scanf_s("%d", &cols);

	A = (int**)malloc(rows * sizeof(int*));

	for (int i = 0; i < cols; i++)
	{
		A[i] = (int*)malloc(cols * sizeof(int));
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			A[i][j] = rand() % + 10;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		printf("\n");
		for (int j = 0; j < cols; j++)
		{
			printf("\t %d", A[i][j]);
		}
	}
	printf("\n\nВектор, компоненты которого равны сумме элементов строк матрицы: \n");
	for (int i = 0; i < rows; i++)
	{
		int sumElem = 0;
		for (int j = 0; j < cols; j++)
		{
			sumElem += A[i][j];
		}
		printf("\n   [%d]", sumElem);
	}

	printf("\n\nВектор, компоненты которого равны сумме элементов столбцов матрицы: \n");
	for (int i = 0; i < cols; i++)
	{
		int sumElem = 0;
		for (int j = 0; j < rows; j++)
		{
			sumElem += A[j][i];
		}
		printf("\n   [%d]", sumElem);
	}

	free(A);

	getchar();
	getchar();
}
