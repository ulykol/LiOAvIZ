// lab1.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>
#include <Windows.h>
#include "StudentStruct.h"
#include "printStudent.h"


int main()
{
	int i;

	const int maxCountStudents = 2;

	setlocale(LC_ALL, "Rus");

	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);
	struct student stud[maxCountStudents];



	for (i = 0; i < maxCountStudents; i++)
	{
		printf("Введите фамилию студента: ");

		scanf("%s", stud[i].lastName);
		printf("Введите имя студента: ");

		scanf("%s", stud[i].firstName);
		printf("Введите группу, в которой состоит студент: ");

		scanf("%s", stud[i].faculty);
		printf("Введите оценку по программированию: ");

		scanf("%s", stud[i].estimation);
	}


	for (i = 0; i < maxCountStudents; i++)
	{
		printStudent(stud[i]);
	}
	char record[20];

	printf("Введите то, что вы хотите найти: ");

	scanf("%s", record);

	for (i = 0; i < maxCountStudents; i++)
	{


		if (strcmp(record, stud[i].lastName) == 0) {

			printf("Найден студента :\n");

			printStudent(stud[i]);

		}

		if (strcmp(record, stud[i].firstName) == 0) {

			printf("Найден студента :\n");

			printStudent(stud[i]);

		}

		if (strcmp(record, stud[i].faculty) == 0) {

			printf("Найден студента :\n");

			printStudent(stud[i]);

		}

		if (strcmp(record, stud[i].estimation) == 0) {

			printf("Найден студента :\n");

			printStudent(stud[i]);

		}

	}

	getchar();

	getchar();

	return 0;
}


