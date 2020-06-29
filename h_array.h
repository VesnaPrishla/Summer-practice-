#ifndef _H_ARRAY_H
#define _H_ARRAY_H
#include <stdio.h> 
#include<malloc.h>
#include "h_utilits.h"

//Массив из нулей
void zerro_array(int* array, int array_size);//Заполняет массив нулями

//Выделение памяти под массив
int array_allocation(int** array, int n);

#endif //_H_ARRAY_H
