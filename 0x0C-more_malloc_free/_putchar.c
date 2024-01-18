#include <stdio.h>
/**
 * _putchar - Writes a character to the std output
 * @c: The character to write
 * Return: on success, number of characters written
 *        On error, -1 is returned
 */
int _putchar(char c);
{
  return write(1, &c, 1);
}
