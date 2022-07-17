#include "main.h"
/**
 * flip_bits - function that gets the number of bits flipped form n to m
 * @n: initial lu int
 * @m: secondary lu in
 * Return: number of bits need to flip to get from `n to `m`
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int length;
	unsigned long int j;
	unsigned long int i;

	length = sizeof(n) * 8 - 1;

	j = 0;
	i = 0;

	while (i <= length)
	{
		if ((n & 1) != (m & 1))
			j++;

		n = n >> 1;
		m = m >> 1;

		i++;
	}

	return (j);

}
