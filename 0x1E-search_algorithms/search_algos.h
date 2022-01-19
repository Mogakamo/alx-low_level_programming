#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stddef.h>
#include <stdio.h>

/* 0 - Linear Search */
int linear_search(int *array, size_t size, int value);
/* 1 - Binary Search */
int binary_search(int *array, size_t size, int value);
/* 7 - Jump Search */
int jump_search(int *array, size_t size, int value);
/* 9 - Interpolation Search */
int interpolation_search(int *array, size_t size, int value);

#endif
