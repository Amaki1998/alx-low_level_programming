#include <stdio.h>
/**
 * main - core function
 * Return: exit the program
 */

int main(void)
{
	char small = 97;
	char capital = 65;

	while (small <= 122)
	{
		putchar(small);
		++small;
	}
	while (capital <= 90)
	{
		putchar(capital);
		++capital;
	}

	putchar('\n');

	return (0);
}
