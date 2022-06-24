#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1, j = 0;

	if (argc < 1)
		printf("0\n");
	while (i < argc)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		j = j + atoi(argv[i]);
		i++;
	}
	printf("%d\n", j);
	return (0);
}
