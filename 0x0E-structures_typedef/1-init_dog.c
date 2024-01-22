#include "main.h"
#include <stddef.h>
/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to a character string representing thr dog's name
 * @age: number representing dogs age
 * @owner: pointer to string representing dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
