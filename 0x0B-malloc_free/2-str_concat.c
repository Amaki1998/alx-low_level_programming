#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 *@s1:  first string
 *@s2: second string
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new = 0;
	unsigned int x;
	int i = 0;
	int j = 0;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != 0)
		i++;
	while (s2[j] != 0)
		j++;
	new = (char *)malloc((i + j + 1) * sizeof(char));
	if (new == 0)
	{
		return (NULL);
	}
	while (s1[x] != 0)
	{
		new[x] = s1[x];
		x++;
	}
	while (s2[count] != 0)
	{
		new[x] = s2[count];
		x++;
		count++;
	}
	return (new);
}
