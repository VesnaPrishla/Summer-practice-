#include "h_utilits.h"
//Функция корректного ввода
int right_input(int* n)
{
	int check;
	while (1)
	{
		check = scanf_s("%d", n);
		if (check < 1)
		{
			while (getchar() != '\n');
			printf("Try again");
			continue;
		}
		return *n;
	}
}