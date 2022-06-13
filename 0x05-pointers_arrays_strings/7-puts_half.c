#include "main.h"
/**
 * puts_half - function half of a string
 * @str: pointer
 */
void puts_half(char *str)
{
	int leng = 0;
	int sublen;

	while (str[leng] != '\0')
		leng++;
	sublen = (leng % 2 == 0) ? leng / 2 : (leng + 1) / 2;
	while (str[subleng] != '\0')
		_putchar(str[sublen++]);
	_putchar('\n');
}
