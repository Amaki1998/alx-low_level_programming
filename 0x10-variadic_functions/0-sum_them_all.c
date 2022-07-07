#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number arguments
 * Return: returns 0 if n == 0 or sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	int s;
	va_list args;

	s = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	while (x < n)
	{
		s += va_arg(args, int);
		x++;
	}
	va_end(args);
	return (s);
}
