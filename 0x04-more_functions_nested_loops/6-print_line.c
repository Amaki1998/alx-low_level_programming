#include "main.h"
/**
 * print_line - function that draws straight line
 * @n: integer
 */
void print_line(int n)
{
	if (n >= 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
