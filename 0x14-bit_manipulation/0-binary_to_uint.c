#include "main.h"
/**
 * binary_to_uint - function that converts binary number to unsigned int.
 * @b: pointing string
 * Return: returns converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int x = 0;

	while (b[x] != '\0')
	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[x] == '0')
			decimal <<= 1;
		else if (b[x] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[x] != '0' && b[x] != '1')
			return (0);
		x++;
	}

	return (decimal);
}
