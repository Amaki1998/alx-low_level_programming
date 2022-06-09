#include "main.h"
/**
 * print_number - function Prints integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int i, j, base10 = 1;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	j = i;
	while (j > 9)
	{
		j = j / 10;
		base10 = base10 * 10;
	}
	j = i;
	while (base10 > 1)
	{
		_putchar((j / base10) + '0');
		j = j % base10;
		base10 = base10 / 10;
	}
	_putchar((i % 10) + '0');
}
