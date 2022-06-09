#include "main.h"
/**
* _isupper - function that checks for uppercase character
*
* @c: character
*
* Return: return 1 for uppercase else return 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
