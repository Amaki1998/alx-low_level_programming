#include <stdlib.h>
#include "main.h"
/**
* **strtow - function that splits a string into words.
* @str : pointer
* Return: returns NULL if str == NULL or a pointer to an array of strings
*/
char **strtow(char *str)
{
	char **x;
	int i = 0, j = 0, k = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != NULL)
	{
		if (str[i] != ' ')
			k++;
		i++;
	}
	x = malloc(sizeof(char) * k);
	if (x == NULL)
		return (NULL);
	i = 0;
	while (str[i] != NULL)
	{
		if (str[i] != ' ')
		{
			*x[j] = str[i];
			j++;
		}
		else
		{
		}
		i++;
	}
	return (x);
}
