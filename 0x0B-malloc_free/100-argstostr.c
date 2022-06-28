#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: integer number
 * @av: parameter
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	char *x;
	int i = 0, j = 0, k, y = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	while (j < ac)
	{
		k = 0;
		while (av[j][k] != '\0')
		{
			j++;
			i++;
		}
		j++;
		i++;
	}
	i++;
	x = malloc(i * sizeof(char));
	if (x == 0)
		return (NULL);
	j = 0;
	while (j < ac)
	{
		for (k = 0; av[j][k] != '\0'; j++)
		{
			x[y++] = av[j][k];
		}
		x[y++] = '\n';
		j++;
	}
	x[y] = '\0';
	return (x);
}
