#include "main.h"
#include <string.h>
/**
 * print_rev - function that reverts the string
 * @s: string
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i = i + 1;
		s = s + 1;
	}
	while (i >= 0)
	{
		_putchar(*s);
		s = s - 1;
		i = i - 1;
	}
}
