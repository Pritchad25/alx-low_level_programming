#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - this function initializes a variable of
 * type struct dog
 * @name: the name that is going to be initialized
 * @age: the age that is going to be initialized
 * @owner: the owner to initialize
 * @d: the pointer to the struct dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
