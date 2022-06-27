#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 *@str: string
 * Return: returns a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *new = 0;
	unsigned int x = 0;
	int y = 0;

	if (str == 0)
		return (NULL);
	while (str[y] != '\0')
		y++;
	new = (char *)malloc(y + 1 * sizeof(char));
	if (new != 0)
	{
		while (str[x] != '\0')
		{
			new[x] = str[x];
			x++;
		}
	}
	else
	{
		return (NULL);
	}
	new[x] = '\0';
	return (new);
}
