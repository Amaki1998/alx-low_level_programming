#include "main.h"
/**
 * print_chessboard - function that print in the terminal the chessboard
 * @a: character
 *
 */
void print_chessboard(char(*a)[8])
{
	int i = 0;
	int j;

	while (i <= 7)
	{
		j = 0;
		while (j <= 7)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
