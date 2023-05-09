#include"main.h"
#include<stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix of integers
 * @a: array/matrix
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int i, diagsum1 = 0, diagsum2 = 0;

	for(i = 0; i < size; i++)
	{
		diagsum1 += a[i];
		diagsum2 += a[size - i - 1];
		a += size;
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
