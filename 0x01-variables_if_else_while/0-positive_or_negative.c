#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n;
printf("enter the variable number: ");
scanf("%d", &n);
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}

