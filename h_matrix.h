#ifndef _H_MATRIX_H
#define _H_MATRIX_H
#include <stdio.h> 
#include<malloc.h>
#include "h_utilits.h"

//������������ ������ ��-��� ������� 
void free_matrix(int*** matrix, int matrix_size);

//��������� ������ ��� �������
int matrix_allocation(int*** matrix, int lines, int columns);

#endif //_H_MATRIX_H
