#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointer
 * Return: return i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
		s = s + 1;
	}

	return (i);
}
