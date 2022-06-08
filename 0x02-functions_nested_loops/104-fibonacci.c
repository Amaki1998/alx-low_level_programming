#include <stdio.h>
/**
 * main - main function
 *
 * Return: exit program
 */
int main(void)
{
	unsigned long int a, b, c, x, y, z, i;

	b = 1;
	c = 2;

	printf("%lu", j);
	a = 1;
	while (a < 91)

	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
		a++;
	}
	x = b / 1000000000;
	y = b % 1000000000;
	z = c / 1000000000;
	i = c % 1000000000;
	a = 92;
	while (a < 99)
	{
		printf(", %lu", z + (i / 1000000000));
		printf("%lu", i % 1000000000);
		z = z + x;
		x = z - x;
		i = i + y;
		y = i - y;
		a++;
	}
putchar('\n');

return (0);
}
