#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: extracts last digit of n and decides if its +ve, -ve or 0
 *
 * Return: Always (0) Success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
{
int lastDigit;
lastDigit = n % 10;
printf("Last digit of %d is %d ", n, lastDigit);
if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit == 0)
printf("and is 0\n");
else
printf("and is less than 6 and not 0\n");
}
return (0);
}
