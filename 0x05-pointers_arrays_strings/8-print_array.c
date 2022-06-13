#include <stdio.h>
#include "main.h"
/**
 * print_array - function
 *
 * @a: pointer of parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int x = 0;

	if (n > 0)
	{
		while (x < n - 1)
			printf("%d, ", a[x++]);
		printf("%d\n", a[x]);
	}
	else
		printf("\n");
}
