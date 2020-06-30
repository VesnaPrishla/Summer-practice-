#ifndef _H_UTILITS_H
#define _H_UTILITS_H
#include <stdio.h> 
//Функция корректного ввода
int right_input(int* matrix_size);

//Функция корректного, положительного ввода
void overheating_protection(int* n);

//Функция корректного, положительного ввода
void overheating_protection_start(int* n, int start);

//Ввод вершины фул
void add_an_apex(int start, int matrix_size);
#endif // _H_UTILITS_H

