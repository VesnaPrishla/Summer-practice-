#include "h_utilits.h"
//Функция корректного ввода
int right_input(int*n)
{
	int is_correct;
	while (1)
	{
		is_correct = scanf_s("%d", n);
		if (!is_correct )
		{
			while (getchar() != '\n');
			printf("Try again");
			continue;
		}
		return *n;
	}
}
//Функция корректного, положительного ввода
void overheating_protection(int* n)
{
	 do 
	{
		printf("\nPrint positive");
		right_input(n);
	} while (*n <= 0);

}

//Ввод вершины в пределах 
void overheating_protection_start(int *n, int matrix_size)
{
	do
	{
		printf("\nPrint from 0 to matrix_size-1\n");
		right_input(n);
	} while ((*n < 0) || (*n >= matrix_size));
}





