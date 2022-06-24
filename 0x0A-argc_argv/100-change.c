#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 1 if the number of arguments passed to
 * the program is not exactly 1, else returns 0
 */
int main(int argc, char *argv[])
{
	int i = 0, j;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);

	while (j > 0)
	{
		if (j - 25 >= 0)
			j -= 25;
		else if (j - 10 >= 0)
			j -= 10;
		else if (j - 5 >= 0)
			j -= 5;
		else if (j - 2 >= 0)
			j -= 2;
		else if (j - 1 >= 0)
			j -= 1;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
