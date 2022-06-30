#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: integer
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int x = 0, y = 0, c1, c2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	if (n < y)
		y = n;
	y += x;
	ar = malloc(sizeof(char *) * (y + 1));
	if (ar == NULL)
		return (NULL);
	for (c1 = 0; c1 < x; c1++)
	{
		ar[c1] = s1[c1];
	}
	for (c2 = 0; c1 < y; c2++)
	{
		ar[c1] = s2[c2];
		c1++;
	}
	c1++;
	ar[c1] = '\0';
	return (ar);
}
