#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @s: the string
 * Return: return encode string
 */
char *rot13(char *s)
{
	int x, y;

	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char B[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (A[y] != '\0')
		{
			if (s[x] == A[y])
			{
				s[x] = B[y];
				break;
			}
			y++;
		}
		x++;
	}
	return (s);
}
