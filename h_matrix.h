#ifndef _H_MATRIX_H
#define _H_MATRIX_H
#include <stdio.h> 
#include<malloc.h>
#include "h_utilits.h"

//Освобождение памяти из-под матрицы 
void free_matrix(int*** matrix, int matrix_size);

//Выделение памяти под матрицу
int matrix_allocation(int*** matrix, int lines, int columns);

#endif //_H_MATRIX_H
