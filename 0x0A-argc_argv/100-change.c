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
	int i, j = 0, k = 0;
	int a[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
	}
	else
	{
		while (j < 5)
		{
			if (i >= a[j])
			{
				i = i - a[i];
				k = k + 1;
				if (i >= a[i])
				{
					j--;
				}
				else if (i == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", k);
		return (0);
	}
}
