#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints information about a dog
 * @d: pointer to struct dog
 *
 * Description: This function prints the information about a dog,
 * including its name, age, and owner. If any element of the dog
 * is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.1f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
