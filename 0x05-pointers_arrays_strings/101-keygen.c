#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function that random password generator for 101-crackme
 * Return: always 0
 */
int main(void)
{
	char y[100];
	int r, z, x;

	z = 0;
	x = 0;
	srand(time(NULL));
	while (z < 2645)
	{
		r = rand() % 122;
		if (r > 32)
		{
			y[x++] = r;
			z += r;
		}
	}
	y[x++] = (2772 - z);
	y[x] = '\0';
	printf("%s", y);
	return (0);
}
