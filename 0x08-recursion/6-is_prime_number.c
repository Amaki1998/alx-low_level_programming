#include "main.h"
/**
 * checker - checks prime number
 * @x: integer
 * @y: integer
 * Return: returns 1 if the input integer is prime number, otherwise 0
 */
int checker(int x, int y)
{
	if (y != 1)
	{
		if (x == y)
		{
			return (1);
		}
		else if (y % x == 0 || y <= 1)
		{
			return (0);
		}
		else
		{
			return (checker(x + 1, y));
		}
	}
	return (0);
}
/**
 * is_prime_number - function that returns a prime number
 * @n: integer
 * Return: return input prime integer
 */
int is_prime_number(int n)
{
	int i = 2;

	return (checker(i, n));
}
