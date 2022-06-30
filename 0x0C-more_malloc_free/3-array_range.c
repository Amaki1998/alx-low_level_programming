#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: int type
 * @max: int type
 * Return:  return pointer to array or NULL
 */

int *array_range(int min, int max)
{
	int *p;
	int ar;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	ar = 0;
	while (min <= max)
	{
		p[ar] = min;
		min++;
		ar++;
	}
	return (p);
}
