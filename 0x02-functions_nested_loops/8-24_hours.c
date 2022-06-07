#include "main.h"
/**
 * jack_bauer - function prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
int hr, hr1, hr2, min, min1, min2;
hr = 0;
while (hr <= 23)
{
hr1 = hr / 10;
hr2 = hr % 10;
min = 0;
while (min < 60)
{
min1 = min / 10;
min2 = min % 10;
_putchar(hr1 + '0');
_putchar(hr2 + '0');
_putchar(':');
_putchar(min1 + '0');
_putchar(min2 + '0');
_putchar('\n');
min++;
}
hr++;
min = 0;
}
}

