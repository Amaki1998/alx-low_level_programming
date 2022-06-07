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
for (x = 0; x < 1; x++)
{
for (y = 0; y < 10; y++)
{
i = y * x;
a = i % 10;
b = (i - b) / 10;
if (y > 0)
{
_putchar(' ');
(b <= 0) ? _putchar(' ') : _putchar(b + '0');
}
_putchar(b + '0');
if (y < 9)
_putchar(44);
}
y = 0;
_putchar('\n');
}
}
