#include <stdio.h>
/**
 * print_times_table - function print n timestable
 * @n: variable
 */
void print_times_table(int n)
{
	int x, y, z;
	int a = 1;
	if (n >= 0 && n <= 15)
	{
		y = 0;
		while (y <= n)
		{
			x = 0;
			while (x <= n)
			{
				z = y * x;
				if (a == 0 && z < 10)
				{
					printf(",   %d", z);
				}
				else if (a == 0 && z < 100)
				{
					printf(",  %d", z);
				}
				else if (a == 0 && z < 1000)
				{
					printf(", %d", z);
				}
				else if (a == 0 && z >= 1000)
				{
					printf(",%d", z);
				}
				else
				{
					printf("%d", z);
				}
				x++;
				a = 0;
			}
			y++;
			putchar('\n');
			a = 1;
		}
	}
	else
	{
	}
}
