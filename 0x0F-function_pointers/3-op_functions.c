#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operator
 * @a: integer first
 * @b: integer second
 * Return: returns sum of 2 integer
 */
int op_add(int a, int b)
{
	int y;

	y = a + b;
	return (y);
}

/**
 * op_sub - subtraction operator
 * @a: integer first
 * @b: integer second
 * Return: difference of 2 numbers
 */
int op_sub(int a, int b)
{
	int x;

	x = a - b;
	return (x);
}

/**
 * op_mul - product of 2 numbers
 * @a: integer first
 * @b: integer second
 * Return: product of the numbers
 */
int op_mul(int a, int b)
{
	int z;

	z = a * b;
	return (z);
}

/**
 * op_div - division of 2 numbers
 * @a: integer first
 * @b: integer second
 * Return: result of the division of the numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	int j;

	j = a / b;
	return (j);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @a: integer first
 * @b: integer second
 * Return: remainder of division of the numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	int k;

	k = a % b;
	return (k);
}
