#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: integer
 */
void print_diagonal(int n)
{
	int y, x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
