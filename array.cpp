#include "h_array.h"

//������ �� �����
void zerro_array(int* array, int array_size)//��������� ������ ������
{
	int i = 0;
	for (i = 0;i < array_size;i++)
		array[i] = 0;
}

//��������� ������ ��� ������
int array_allocation(int** array, int n)
{
	*array = (int*)malloc(n * sizeof(int));
	if (*array == NULL)
		return 0;
	return 1;
}