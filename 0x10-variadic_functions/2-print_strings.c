#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a newline
 * @separator: string
 * @n: number arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	char *p;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	while (x < n)
	{
		p = va_arg(args, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator != NULL && (x + 1) != n)
			printf("%s", separator);
		x++;
	}
	printf("%c", '\n');
	va_end(args);
}
