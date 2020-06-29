#include "h_array.h"

//Массив из нулей
void zerro_array(int* array, int array_size)//Заполняет массив нулями
{
	int i = 0;
	for (i = 0;i < array_size;i++)
		array[i] = 0;
}

//Выделение памяти под массив
int array_allocation(int** array, int n)
{
	*array = (int*)malloc(n * sizeof(int));
	if (*array == NULL)
		return 0;
	return 1;
}