#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string
 * Return: return converted string.
 */
int _atoi(char *s)
{
	short b;
	int x, y, z;

	x = y = z = b = 0;
	y = -1;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
			y *= -1;

		if (s[x] >= '0' && s[x] <= '9')
		{
			z *= 10;
			z -= (s[x] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
		x++;
	}
	z *= y;
	return (z);
}
