#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @dog: the struct
 * @d: the dog
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)\n");
	if (d->age == 0)
		printf("(nil)\n");
	if (d->owner == NULL)
		printf("(nil)\n");
	if (d == NULL)
		printf("\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
