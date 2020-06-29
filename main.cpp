#include "h_utilits.h"
#include "h_matrix.h"
#include "h_array.h"
int main()
{
	int** matrix, *visited, matrix_size;
	overheating_protection(&matrix_size);
	if (matrix_allocation(&matrix,matrix_size, matrix_size) == 0)
		return 0;
	printf("\nadd the number of elements");
	right_input_matrix(matrix, matrix_size, matrix_size);
	if (array_allocation(&visited, matrix_size) == 0)
	{
		free_matrix(&matrix, matrix_size);
		return 0;
	}
	zerro_array(visited, matrix_size);
	print_martix(matrix, matrix_size, matrix_size);
	free_matrix(&matrix, matrix_size);
	free(visited);
	getchar();
}