#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of a substring or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y;

	while (haystack[x] != '\0')
	{
		y = 0;
		while (needle[y] != '\0')
		{
			if (needle[y] != haystack[y + x])
			{
				break;
			}
			y++;
		}
	if (needle[y] == '\0')
	{
		return (&haystack[x]);
	}
	x++;
	}
	return (0);
}
