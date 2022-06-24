#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1, j = 1;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		while (i < argc)
		{
			j = j * atoi(argv[i]);
			i++;
		}
		printf("%d\n", j);
	}
	return (0);
}
