#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - function that adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1, j = 0, k = 1;

	while (i < argc)
	{
		while (argv[j][j] != 0)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
			j++;
		}
		k = k + atoi(argv[i]);
		i++;
	}
	printf("%d\n", k);
	return (0);
}
