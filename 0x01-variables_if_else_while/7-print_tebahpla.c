#include <stdio.h>
/**
 * main - core function
 *
 * Return: exit program
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; --i)
		putchar(i);

	putchar('\n');
	return (0);
}
