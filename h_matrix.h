#ifndef _H_MATRIX_H
#define _H_MATRIX_H
#include <stdio.h> 
#include<malloc.h>
#include "h_utilits.h"

//Освобождение памяти из-под матрицы 
void free_matrix(int*** matrix, int matrix_size);

//Выделение памяти под матрицу
int matrix_allocation(int*** matrix, int lines, int columns);

//Ровный ввод матрицы 
void right_input_matrix(int** matrix, int lines, int columns);

//Вывод на печать матрицы 
void print_martix(int** matrix, int lines, int columns);
#endif //_H_MATRIX_H
