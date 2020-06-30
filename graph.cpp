#include "h_graph.h"

//Обход графа в глубину
void graph_in_depth(int** matrix, int apex, int* visited, int matrix_size)
{
	int j = 0;
	visited[apex] = 1;//Текущая вершина посещена
	printf("\nApex- %d", apex);
	for (;j < matrix_size;j++)
		if ((matrix[apex][j] != 0) && (visited[j] == 0))//Есть дорога и вершина не посещена
			graph_in_depth(matrix, j, visited, matrix_size);
}