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
	unsigned int x;

	if (size != NULL || array != NULL || cmp != NULL)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(*(array + x)))
				return (x);
		}
	}
	return (-1);
}
