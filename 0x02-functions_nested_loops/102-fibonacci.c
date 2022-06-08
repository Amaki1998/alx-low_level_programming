#include <stdio.h>
/**
 * main - core function prints first fibonacci numbers
 *
 * Return: exit program
 */
int main(void)
{
	long int x = 1, y = 1, z = 1, a;

	printf("%d", y);
	while (x < 50)
	{
		a = y + z;
		printf(", %d", a);
		y = z;
		z = a;
		x++;
	}
	putchar('\n');

	return (0);
}
