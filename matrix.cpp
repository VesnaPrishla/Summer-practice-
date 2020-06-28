#include"h_matrix.h"
//Выделение памяти под матрицу
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

//Освобождение памяти из-под матрицы 
void free_matrix(int*** matrix, int matrix_size)
{
	for (int i = 0;i < matrix_size;i++)
		free((*matrix)[i]);
	free((*matrix));
	*matrix = NULL;
}