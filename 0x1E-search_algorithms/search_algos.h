#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/* linear search */
int linear_search(int *array, size_t size, int value);

/* binary search */
int binary_search(int *array, size_t size, int value);

/* jump search */
int jump_search(int *array, size_t size, int value);

int exponential_search(int *array, size_t size, int value);

#endif
