#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a dog structure with provided values
 * @d: pointer to the struct dog variable to initialize
 * @name: pointer to a character array rep dog's name
 * @age: floating-point value rep dog's age
 * @owner: pointer to a character array rep owner's name
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
