#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a newline
 * @separator: string printed between numbers
 * @n: number f arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}

	while (x < n)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && (x + 1) != n)
			printf("%s", separator);
		x++;
	}
	printf("%c", '\n');
	va_end(args);
}
