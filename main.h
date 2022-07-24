#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>

#define CLK_TCK CLOCKS_PER_SEC
#define block_size 10

typedef struct _array
{
	char* array;
	int size;
} Array;

clock_t start, stop;
double end_time;

void array_inflate(Array* a, int more_size, char sign);
Array input(void);
char separate(Array a, Array* array1, Array* array2);


bool transform(Array* array1, Array* array2, int* max_size, int* min_size, char** dst, char** src, char sign);//锟�?�凤�?'0' ~ '9'�?�?'\x0' ~ '\x9'

Array plus(Array array1, Array array2, char sign);
Array subtract(Array array1, Array array2, char sign);
void multiply(Array array1, Array array2);
void divide(Array array1, Array array2);


Array output(char* dst, int max_size, char sign);