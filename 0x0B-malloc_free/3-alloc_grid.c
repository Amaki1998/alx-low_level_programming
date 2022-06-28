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
	int i = 0;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int) * height);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	while (i < height)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar == NULL)
		{
			free(ar);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ar[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ar);
}
