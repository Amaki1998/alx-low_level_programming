#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: return their difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != *s2)
	{
		if (*s1 != *s2)
		{
			return (*s2 - *s1);
		}
		s1++;
		s2++;
	}
	return (0);
}
