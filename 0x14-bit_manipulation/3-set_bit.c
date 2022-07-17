#include "main.h"
/**
 * set_bit - function that sets the value a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index to set to 1
 * Return: returns 1 if succeeded of -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int length;
	unsigned long int i;

	length = sizeof(*n) * 8 - 1;

	if (index > length)
		return (-1);

	i = 1 << index;

	*n = i | *n;

	return (1);
}
