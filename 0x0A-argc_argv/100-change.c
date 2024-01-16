#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins needed for change
 * @cents: The amount in cents for which change needs to be given
 * Return: The minimum number of coins needed for change
 */
int minCoins(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int coinCount = 0;
int i;
if (cents < 0)
return (0);
for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
coinCount++;
}
}
return (coinCount);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int cents;
int result;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
result = minCoins(cents);
printf("%d\n", result);
return (0);
}
