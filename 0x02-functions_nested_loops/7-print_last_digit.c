#include "main.h"
/**
 * print_last_digit - print the last digit
 *
 * @x: variable
 *
 * Return: return the last digit
 */
int print_last_digit(int x)
{
int last_dig = x % 10;

if (last_dig > 0)
{
_putchar(last_dig + '0');
return (last_dig);
}
else
{
_putchar(-last_dig + '0');
return (-lasst_dig);
}
}
