#include<stdio.h>
#include<stdlib.h>
/**
 * main- that prints the opcodes of its own fun
 *@argc: argument count
 *@argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0, x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (count < x)
	{
		printf("%02hhx", *((char *)main + i));
		if (count  < x - 1)
			printf(" ");
		else
			printf("\n");
		count++;
	}
	return (0);
}
