#include <stdio.h>
/**
 * print_buffer - function that prints buffer
 * @b: buffer
 * @size: bytes of the buffer
 */
void print_buffer(char *b, int size)
{
	int x, y;

	x = 0;
	if (size <= 0)
		putchar('\n');
	else
	{
		while (x < size)
		{
			printf("%08x: ", x);
			for (y = 0; y < 10; y++)
			{
				if (y % 2 == 0 && y > 0)
					putchar(' ');
				if (y + x > size - 1)
					putchar(' ');
				else
					printf("%.2x", b[y + x]);
			}
			putchar(' ');
			for (y = 0; y < 10; y++)
			{
				if (y + x > size - 1)
					break;
				if (b[y + x] >= ' ' && b[y + x] <= '~')
					putchar(b[y + x]);
				else
					putchar('.');
			}
			putchar('\n');
			x += 10;
		}
	}
}
