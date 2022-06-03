#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int num;
int last_digit;
printf("enter the string: ");
scanf("%d ", &num);
last_digit = num % 10;
if (last_digit >  5)
{
printf("Last digit of %d is %d and is greater than 5\n", num, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is and is 0\n", num, last_digit);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d and is and is and is less than 6 and not 0\n", num, last_digit);
}
return (SUCCESS);
}
