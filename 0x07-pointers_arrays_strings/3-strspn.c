#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: returns number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int x = 0;
	int y = 0;

	while (s[x] != '\0')
	{
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				n++;
			}
			y++;
		}
		y = 0;
		x++;
		if (s[x] == 32)
		{
			break;
		}
	}
	return (n);
}
