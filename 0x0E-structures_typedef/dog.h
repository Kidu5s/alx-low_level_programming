#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a stucture hold a name age and owner
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
