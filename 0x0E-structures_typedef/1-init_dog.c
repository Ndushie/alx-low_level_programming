#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 *
 * @d: Pointer to the struct dog variable to initialize
 *
 * @name: Pointer to the name string
 *
 * @age: Age value
 *
 * @owner: Pointer to the owner string
 *
 * Description: This function initializes the members of the struct dog
 *              variable pointed to by @d with the provided values.
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
