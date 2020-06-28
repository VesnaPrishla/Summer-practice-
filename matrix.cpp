#include"h_matrix.h"
//��������� ������ ��� �������
int matrix_allocation(int*** matrix, int lines, int columns)
{
	*matrix = (int**)malloc(lines * sizeof(int*));
	if (*matrix == NULL)
		return 0;

	for (int i = 0; i < lines; i++)
	{
		(*matrix)[i] = (int*)malloc(columns * sizeof(int));
		if ((*matrix)[i] == NULL)
		{
			free_matrix(matrix, i);
			return 0;
		}
	}
	return 1;
}

//������������ ������ ��-��� ������� 
void free_matrix(int*** matrix, int matrix_size)
{
	for (int i = 0;i < matrix_size;i++)
		free((*matrix)[i]);
	free((*matrix));
	*matrix = NULL;
}

//������ ���� ������� 
void right_input_matrix(int** matrix, int lines, int columns)
{
	printf("\nEnter the matrix\n");
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < columns; j++)
			right_input(matrix[i] + j);
	}
}

//����� �� ������ ������� 
void print_martix(int** matrix, int lines, int columns)
{
	printf("massiv\n");
	for (int i = 0; i < lines; i++)
	{
		printf("\n");
		for (int j = 0; j < columns; j++)
			printf("%d ", matrix[i][j]);
	}
}