#include <stdio.h>
/**
 * main - program prints the number of arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
		(*argv)++;
	}
	printf("%d\n", i - 1);
	return (0);
}
