#include"main.h"
#include<stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix of integers
 * @a: array/matrix
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for(i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += 3;
	}

	printf("%d, %d\n", s1, s2);
}
