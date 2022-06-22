#include "main.h"
/**
 * check_sqrt - function that check sqrt of a number y
 * @x: integer
 * @y: integer
 * Return: returns -1 or sqrt of y
 */
int check_sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check_sqrt(x + 1, y));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * Return: returns -1 or sqrt n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
