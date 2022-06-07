#include "main.h"
/**
* print_sign - function prints sign of a number
*
* @n: The variable to check
*
* Return: Get 1 if c is positive,
* get 0 if it's 0, and
* get -1 otherwise
*/
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
