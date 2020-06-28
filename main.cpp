#include "h_utilits.h"
#include "h_matrix.h"
int main()
{
	int** matrix, matrix_size;
	overheating_protection(&matrix_size);
	if (matrix_allocation(&matrix,matrix_size, matrix_size) == 0)
		return 0;
	free_matrix(&matrix, matrix_size);
	getchar();
}