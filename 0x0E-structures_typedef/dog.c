#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_dog - Creates a new dog structure
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Return: Pointer to the newly created dog structure
 */
dog_t *create_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the dog structure
 */
void print_dog(dog_t *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
