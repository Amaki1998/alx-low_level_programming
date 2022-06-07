#include "main.h"
/**
 * print_alphabet_x10 - prints 10 time small letter alphabet
 */
void print_alphabet_x10(void)
{
char ch;
int n = 10;
while (n >= 1)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
n--;
_putchar('\n');
}
}
