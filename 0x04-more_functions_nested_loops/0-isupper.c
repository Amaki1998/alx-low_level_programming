#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 *
 * @c: character
 *
 * Return: return 1 for upper case else 0 
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
