#include "h_graph.h"

//����� ����� � �������
void graph_in_depth(int** matrix, int apex, int* visited, int matrix_size)
{
	int j = 0;
	visited[apex] = 1;//������� ������� ��������
	printf("\nApex- %d", apex);
	for (;j < matrix_size;j++)
		if ((matrix[apex][j] != 0) && (visited[j] == 0))//���� ������ � ������� �� ��������
			graph_in_depth(matrix, j, visited, matrix_size);
}