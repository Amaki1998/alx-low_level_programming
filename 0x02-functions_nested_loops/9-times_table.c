#include "main.h"
/**
* times_table - function to print nine times table
*
*/
void times_table(void)
{
int y;
int x;
int a = 0;
int b = 0;
int i = 0;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
i = y * x;
a = i % 10;
b = (i - a) / 10;
if (y > 0)
{
_putchar(' ');
(b <= 0) ? _putchar(' ') : _putchar(b + '0');
}
_putchar(a + '0');
if (y < 9)
_putchar(',');
}
y = 0;
_putchar('\n');
}
}
