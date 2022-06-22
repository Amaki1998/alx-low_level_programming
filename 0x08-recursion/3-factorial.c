#include "main.h"
/**
 * factorial - function that returns the factorial of given number
 * @n: integer input
 * Return: 1 if n=0 , -1 if n<0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else if (n == 0 || n == 1)
		return (1);
}
