#include "main.h"
/**
 * *_strcpy - function copies the string pointed by src
 * @dest: pointer
 * @src: pointer
 * Return: return dest 
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int srcLen = 0;

	while (dest[x] != '\0')
		dest[x++] = '\0';
	x = 0;
	while (src[srcLen] != '\0')
		srcLeng++;
	for (i = 0; i < srcLeng; x++)
		dest[i] = src[x];
	dest[srcLen] = '\0';
	return (dest);
}
