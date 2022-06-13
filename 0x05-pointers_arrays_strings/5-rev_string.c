#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char c;
	int len = 0;
	int b = 0;
	int a;

	while (s[len] != '\0')
		len++;
	a = len - 1;
	len /= 2;
	while (len--)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;
		b++;
		a--;
	}
}
