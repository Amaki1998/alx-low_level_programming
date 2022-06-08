#include <stdio.h>
/**
 * main - main function lists natural numbers
 *
 * Return: exit program
 */
int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			y = y + x;
		}
		else
		{
		}
		x++
	}
	printf("%d\n", y);

	return (0);
}
