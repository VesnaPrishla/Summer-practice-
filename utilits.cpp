#include "h_utilits.h"
//������� ����������� �����
int right_input(int* matrix_size)
{
	int check;
	while (1)
	{
		check = scanf_s("%d", matrix_size);
		if (check < 1)
		{
			while (getchar() != '\n');
			printf("Try again");
			continue;
		}
		return *matrix_size;
	}
}
//������� �����������, �������������� �����
void overheating_protection(int* n)
{
	 do 
	{
		printf("\nPrint positive");
		right_input(n);
	} while (*n <= 0);
}