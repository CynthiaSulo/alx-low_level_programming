#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the details of a dog
 * @d: pointer to the struct dog variable to print
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d == NULL)
		return;

	name = (d->name != NULL) ? d->name : "(nil)";
	owner = (d->owner != NULL) ? d->owner : "(nil)";

	printf("Name: %s\n", name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", owner);
}
