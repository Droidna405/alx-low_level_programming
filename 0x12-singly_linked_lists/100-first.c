#include <stdio.h>
/**
 * pre_main_message - Prints a message before the main function is executed.
 */
void __attribute__((constructor)) pre_main_message(void)
{
printf("You're beat! and yet,you must allow, \n"
"nI bore my house upon my back!\n");
}
