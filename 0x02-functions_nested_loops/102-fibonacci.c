#include <stdio.h>
/**
 * main - core function prints first fibonacci numbers
 *
 * Return: exit program
 */
int main(void)
{
	int x = 1, y = 1, z = 1, a;

	printf("%ld", y);
	while (x < 50)
	{
		a = y + z;
		printf(", %ld", a);
		y = z;
		z = a;
		x++;
	}
	putchar('\n');

	return (0);
}
