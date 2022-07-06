#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: function pointer
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size < 1 )
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (x < size)
	{
		if (cmp(array[x]))
			return (x);
		x++;
	}

	return (-1);
}
