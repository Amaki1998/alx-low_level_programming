#include "main.h"
/**
 * print_to_98 - function prints all natural no from nto 98
 *
 * @n: variable
 *
 */
void print_to_98(int n)
{
	int last = 98;

	if (n > last)
	{
		while (n >= last)
		{
			if (n != last)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n + '0');
			}
			n--;
		}
	}
	else
	{
		while (n <= last)
		{
			if (n != last)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n + '0');
			}
			n++;
		}
	}
	_putchar('\n');
}
