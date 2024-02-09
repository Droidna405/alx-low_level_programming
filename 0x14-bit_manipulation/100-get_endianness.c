#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * get_endianness - Checks the endianness of the
 * system and prints the number of processors.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int num = 1;
char *endian_check = (char *)&num;
/* long num_processors; */

/* If the first byte of the integer is non-zero, it's little endian */
if (*endian_check)
/* printf("Little endian\n"); */
return (1);
else
/* printf("Big endian\n"); */
return (0);
/* Get the number of processors */
/* num_processors = sysconf(_SC_NPROCESSORS_CONF); */
/* if (num_processors < 0) */
/* { */
/* perror("sysconf"); */
/* return (-1); */
/* } */

/* printf("Number of processors: %ld\n", num_processors); */

return (*endian_check); /* Returns 0 for big endian, 1 for little endian */
}
