#include "h_utilits.h"
#include "h_matrix.h"
#include "h_array.h"
#include "h_graph.h"
#include<conio.h>
int main()
{
	int** matrix, *visited, start = 0, matrix_size;
	printf("\nadd the number of elements");
	overheating_protection(&matrix_size);
	if (matrix_allocation(&matrix,matrix_size, matrix_size) == 0)
		return 0;
	right_input_matrix(matrix, matrix_size, matrix_size);
	if (array_allocation(&visited, matrix_size) == 0)
	{
		free_matrix(&matrix, matrix_size);
		return 0;
	}
	zerro_array(visited, matrix_size);
	print_martix(matrix, matrix_size, matrix_size);
	printf("\nadd the first apex");
	overheating_protection_start(&start, matrix_size);
	graph_in_depth(matrix, start, visited, matrix_size);
	free_matrix(&matrix, matrix_size);
	free(visited);
	_getch();
}
/*7
 0 1 1 1 0 0 0
 1 0 0 0 0 0 0
 1 0 0 0 0 0 0
 1 0 0 0 1 1 1
 0 0 0 1 0 1 0
 0 0 0 1 1 0 0
 0 0 0 1 0 0 0*/