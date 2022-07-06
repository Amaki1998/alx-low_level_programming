#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*k)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
        a = atoi(argv[1]);
        b = atoi(argv[3]);
	k = get_op_func(argv[2]);
	if (k == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", k(a, b));

	return (0);
}
