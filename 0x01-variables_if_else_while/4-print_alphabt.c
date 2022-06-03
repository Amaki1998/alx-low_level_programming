#include <stdio.h>
/**
 * main - core function
 * Return: exit the program
 */
int main(void)
{
	char small = 97;

	while (small <= 122)
	{
		if (small != 101 && small != 113)
		{
			putchar(small);
		}
		++small;
	}
	putchar('\n');

	return (0);
}
