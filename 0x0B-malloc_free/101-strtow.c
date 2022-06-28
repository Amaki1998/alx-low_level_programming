#include <stdlib.h>
#include "main.h"
/**
* **strtow - function that splits a string into words.
* @str : pointer
* Return: returns NULL if str == NULL or a pointer to an array of strings
*/
char **strtow(char *str)
{
	char **r, *ptr = str;
	int j = 0, i = 0;

	if (str == 0 || *str == 0)
		return (0);
	while (*ptr)
	{
		if (!(*ptr == ' ') && (*(ptr + 1) == ' ' || *(ptr + 1) == 0))
			j++;
		ptr++;
	}
	if (j == 0)
		return (NULL);
	r = malloc((j + 1) * sizeof(char *));
	if (r == 0)
		return (0);
	while (*str)
	{
		if (*str != ' ')
		{
			for (ptr = str, j = 0; *ptr != ' ' && *ptr != 0;)
				j++, ptr++;
			r[i] = malloc(j + 1);
			if (r[i] == 0)
			{
				while (i >= 0)
					free(r[--i]);
				free(r);
				return (0);
			}
			ptr = r[i++];
			while (*str != ' ' && *str != 0)
				*ptr++ = *str++;
			*ptr = 0;
		}
		else
			str++;
	}
	r[i] = 0;
	return (r);
}
