#ifndef DOG_H
#define DOG_H
/**
 * struct dog - represents information about dog
 * @name: Pointer to a character string representing the dog's name.
 * @age: Floating-point number representing the dog's age.
 * @owner: Pointer to a character string representing the dog's owner.
 * Description: This structure holds information about a dog,
 * including its name, age, and owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
int _putchar(char c);

#endif /* DOG_H */
