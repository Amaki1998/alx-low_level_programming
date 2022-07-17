#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given inex
 * @n: integer to get bit value from
 * @index: index of n to get bit from
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int length;

	length = sizeof(n) * 8 - 1;

	if (index > length)
		return (-1);

	return ((n >> index) & 1);

}
