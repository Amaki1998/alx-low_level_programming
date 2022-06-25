#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the memory area
 * @c: byte
 * Return: returns a pointer
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return ('\0');
}
