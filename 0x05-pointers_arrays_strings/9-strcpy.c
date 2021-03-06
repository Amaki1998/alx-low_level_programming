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
		srcLen++;
	for (x = 0; x < srcLen; x++)
		dest[x] = src[x];
	dest[srcLen] = '\0';
	return (dest);
}
