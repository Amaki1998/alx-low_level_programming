#include "function_pointers.h"
/**
 * array_iterator - function that execute a function pointer on each
 * element of an array
 * @array: array
 * @size: size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
