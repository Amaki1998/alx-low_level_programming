#include "main.h"
/**
 * _strcat - function concatenates two strings
 * @dest: string
 * @src: string
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		j++;
	}
	return (dest);
}
