#include <stdio.h>
/**
 * main - core function
 *
 * Return: eexit program
 */
int main(void)
{
	int x = 0;

	while (x < 16)
	{
		if (x <= 9)
		{
			putchar(x + '0');
		}
		else
		{
			putchar(x + 87);
		}
		++x;
	}

	return (0);
}
