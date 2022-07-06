#include "3-calc.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*k)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	k = get_op_func(argv[2]);
	if (k == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", k(num1, num2));

	return (0);
}
