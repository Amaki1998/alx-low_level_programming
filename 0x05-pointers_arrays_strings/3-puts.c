#include "main.h"
/**
 * _puts - function that prints a string
 * @str: pointer
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\n')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
