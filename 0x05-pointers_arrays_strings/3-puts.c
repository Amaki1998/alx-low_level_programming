#include "main.h"
/**
 * _puts - function that prints a string
 * @str: pointer
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
