#include <stdio.h>
/**
 * main - core funtion prints largest prime factor
 * Return: exit
 */
int main(void)
{
	long int n, div = 2, maxFact;

	n = 612852475143;
	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%lid", maxFact);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
