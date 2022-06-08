#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	int i = 1;
	long int  n1 = 0;
	long int n2 = 1;
	long int sp = 0;
	long int se = 0;
	long int max = 4000000;

	while (n1 < max && n2 < max)
	{
		sp = n1 + n2;
		se += (((sp % 2) == 0) ? sp : 0);
		n1 = n2;
		n2 = sp;
		i++;
	}
	printf("%ld\n", se);
	return (0);
}
