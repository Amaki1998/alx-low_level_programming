
#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: long integer
 */

void print_binary(unsigned long int n)
{
	signed long int length;
	char i;
	int j;

	length = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	j = 0;

	while (length >= 0)
	{
		i = (n >> length) & 1;

		if (j == 1)
			putchar(i + '0');
		else
		{
			if (i == 1)
			{
				putchar(i + '0');
				j = 1;
			}
		}

		length -= 1;
	}
}
