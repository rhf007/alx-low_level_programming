#include"main.h"

/**
 * reverse_array - reverse array elements
 * @a: the array
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n - 1; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
