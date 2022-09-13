#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <locale>

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");
	const int N = 4, M = 5;
	int A[N][M], i, j;
	int sum;

	printf("\n");
	printf("   Матрица 4х5:\n ");
	printf("\n");

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			A[i][j] = rand() % +4;
			printf("%5d", A[i][j]);
		}
		printf("\n");
		printf("\n");
	}

	printf("   Вектор D, компоненты которого равны сумме элементов строк матрицы:\n ");
	for (i = 0; i < N; i++)
	{
		sum = 0;
		for (j = 0; j < M; j++)
		{
			sum = sum + A[i][j];
		}
		printf("\n");
		printf("   [%d]", sum);
	}

	system("pause>0");

}
