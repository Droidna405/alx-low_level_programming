#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - complete source code to check if either a postive, negative number 0r 0
 *
 * Return - 0
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
  {
    printf("%d is positive\n", n);
  } else if (n == 0)
  {
    printf("%d is zero\n", n);
  } else
  {
    printf("%d is negative\n", n);
  }
  returb (0);
