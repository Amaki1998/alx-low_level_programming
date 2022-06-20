#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sums of the two
 * diagonals of a square matrix
 * @a: pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int x = 0, y = 0, z, i = 0, j = 0;

	while (x < size)
	{
		z = (x * size) + x;
		i = i + *(a + z);
		x++;
	}
	while (y < size)
	{
		z = (y * size) + (size - 1 - y);
		j = j + *(a + z);
		y++;
	}
	printf("%i, %i\n", i, j);
}
