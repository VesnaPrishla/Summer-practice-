#ifndef _H_UTILITS_H
#define _H_UTILITS_H
#include <stdio.h> 
//������� ����������� �����
int right_input(int* matrix_size);

//������� �����������, �������������� �����
void overheating_protection(int* n);

//������� �����������, �������������� �����
void overheating_protection_start(int* n, int start);

//���� ������� ���
void add_an_apex(int start, int matrix_size);
#endif // _H_UTILITS_H

