#include "main.h"
/**
 * print_square - function prints a square
 * @size: integer
 */
void print_square(int size)
{
	int x = size;
	int y = size;

	if (size > 0)
	{
		while (size--)
		{
			while (x--)
			{
				_putchar('#');
			}
			_putchar('\n');
			x = y;
		}
	}
	else
		_putchar('\n');
}
