#include "main.h"
/**
 * _strncat - function concatenates two string
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n && src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
