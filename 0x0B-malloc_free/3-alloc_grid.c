#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer to 2 dimensional
 * @width: integer
 * @height: integer
 * Return: if width or height is or negative return NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int) * height);
	if (ar == 0)
	{
		free(ar);
		return (NULL);
	}

	while (i < height)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar == 0L)
		{
			free(ar);
			return (NULL);
		}
		while (j < width)
		{
			ar[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ar);
}
