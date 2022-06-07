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
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
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
				printf("%d%s", n, ", ");
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	putchar('\n');
}
