#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n;
printf("enter the variable number: ");
scanf("%d", &n);
if (n > 0)
{
printf("%d ", n);
printf("is positive\n", n);
}
else if (n < 0)
{
printf("%d ", n);
printf("is negative\n", n);
}
else
{
printf("%d ", n);
printf("is zero\n", n);
}
return (0);
}

