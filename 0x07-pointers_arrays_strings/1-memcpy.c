#include "holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++;
	{
		dest[k] = src[k];
	}
	return (dest);



}
