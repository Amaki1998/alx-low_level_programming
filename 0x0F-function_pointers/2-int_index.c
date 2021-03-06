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
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(*(array + x)))
			return (x);
	}
	return (-1);
}
