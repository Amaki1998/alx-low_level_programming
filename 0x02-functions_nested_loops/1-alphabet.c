#include "main.h"
/**
 * main - core function
 *
 * Return: 0 return to exit
 */
void print_alphabet(void);
char ch;
main(void)
{
for (ch = 'a'; ch <= 'z'; ch++)
print_alphabet();
putchar('\n');
return (0);
}
void print_alphabet(void)
{
putchar(ch);
}

