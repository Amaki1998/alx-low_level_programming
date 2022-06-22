#include "main.h"
/**
 * is_prime_number - function that return prime number
 * @n: integer input
 * Return: returns 1 if n is prime number otherwise 0
 */
int is_prime_number(int n)
{
	int x;

	x = n / 2;
	if (x == 1)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
	{
		x = x - 1;
		is_prime_number(n);
	}
}
