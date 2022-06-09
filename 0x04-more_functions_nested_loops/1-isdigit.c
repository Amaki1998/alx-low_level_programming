#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: character
 * Return: return 1 for a digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
