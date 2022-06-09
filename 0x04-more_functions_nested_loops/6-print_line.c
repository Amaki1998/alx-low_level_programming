#include "main.h"
/**
 * print_line - function that draws straight line
 */
void print_line(int n)
{
	if (n >= 0)
	{
		while (n > 0)
		{
			putchar('_');
			n--;
		}
	}
	else
	{
		putchar('\n');
	}
	putchar('\n');
}
