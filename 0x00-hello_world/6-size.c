#include <stdio.h>
/**
 * main - initiates the program
 *
 * Description: Program prints the size of vaious data types
 *
 * Return: Success (0)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of char: %lu byte(s)\n", sizeof(c));
printf("Size of int: %lu bytes\n", sizeof(i));
printf("Size of long int: %lu bytes\n", sizeof(li));
printf("Size of long long int: %lu bytes\n", sizeof(lli));
printf("Size of float: %zu bytes\n", sizeof(f));
return (0);
}
