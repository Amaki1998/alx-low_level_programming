#include "main.h"
/**
 * print_triangle - function a triangle
 * @size: integer
 */
void print_triangle(int size)
{
	int col = 0;
	int row = 0;
	int x;

	if (size > 0)
	{
		while (row < size)
		{
			x = size - row - 1;
			while (col < size)
			{
				if (col < x)
					_putchar(' ');
				else
					_putchar('#');
				col++;
			}
			_putchar('\n');
			col = 0;
			row++;
		}
	}
	else
		_putchar('\n');
}
