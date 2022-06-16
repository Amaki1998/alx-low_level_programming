#include "main.h"
/**
 * leet - function encodes a string in 1337
 * @s: string
 * Return: return string
 */
char *leet(char *s)
{
	int i = 0, j, k = 0;
	int let[5] = {'a', 'e', 'o', 't', 'l'};
	int rep[5] = {4, 3, 0, 7, 1};

	while (*(s + i))
	{
		j = 0;
		while (j < 5)
		{
			k = let[j] - ' ';
			if (s[i] == let[j] || s[i] == k)
			{
				s[i] = rep[j] + '0';
			}
			j++;
		}
		i++;
	}
	return (s);
}
