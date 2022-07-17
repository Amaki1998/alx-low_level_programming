#include "main.h"
/**
 * clear_bit - function that sets bit to 0 at given index
 * @n: pointer to unsigned long int
 * @index: index to set to 0
 * Return: returns 1 if succeed -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int length, i;

	length = sizeof(*n) * 8 - 1;

	if (index > length)
		return (-1);

	i = 1 << index;

	*n = *n & ~i;

	return (1);
}
