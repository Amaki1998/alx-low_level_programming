#include "main.h"
/**
 * print_rev - function that reverts the string
 * @s: string
 */
void print_rev(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;
	while (leng > 0)
		_putchar(s[--leng]);
	_putchar('\n');
}
