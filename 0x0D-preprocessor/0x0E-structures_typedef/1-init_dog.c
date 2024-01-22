#include "dog.h"

/**
 * init_dog - initialize a variable
 * @dog: a struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owenr of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
