#include "main.h"
/**
 * reverse_array - function reverses an array of integers
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j, k;

	j = n - 1;

	while (i < n / 2)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
		i++;
	}
}
