/* Auth: Rosita J Uqueio */

#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize
 *    a variable of type struct dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: dog to be initialized
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
