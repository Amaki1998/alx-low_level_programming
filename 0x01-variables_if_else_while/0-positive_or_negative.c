#include <stdio.h>
#include <time.h>
int main(void)
{
int n;
srand(time(0));
n = rand();
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

