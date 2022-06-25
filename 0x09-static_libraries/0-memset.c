#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @s: pointer to the memory area
 * @n: bytes of memory
 * @b: the constant byte
 * Return: returns a pointer the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}
	return (s);
}



