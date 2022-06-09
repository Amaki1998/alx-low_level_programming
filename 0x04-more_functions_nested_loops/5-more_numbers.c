#include "main.h"
/**
 * more_numbers - function prints 10 times number
 */
void more_numbers(void)
{
	int a, b;

	int c = 0;

	for (b = 0; b <= 9; b++)
	{
		for (a = 48; a <= 62; a++)
		{
			if (a > 57)
			{
				c = 10;
				_putchar(49);
			}
			_putchar(a - c);
		}
		a = 48;
		c = 0;
		_putchar('\n');
	}
}
