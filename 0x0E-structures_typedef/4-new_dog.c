#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 *
 * @name: Pointer to the name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Pointer to the owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int length_of_name, length_of_owner;

	/* Check if name and owner are not NULL */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	/* Get the lengths of name and owner */
	length_of_name = strlen(name);
	length_of_owner = strlen(owner);
	/* Allocate memory for the name */
	new_name = malloc((length_of_name + 1) * sizeof(char));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	/* Allocate memory for the owner */
	new_owner = malloc((length_of_owner + 1) * sizeof(char));
	if (new_owner == NULL)
	{
	free(new_name);
	free(new_dog);
	return (NULL);
	}
	/* Copy the name and owner strings */
	strncpy(new_name, name, length_of_name);
	strncpy(new_owner, owner, length_of_owner);

	/* Set the new dog's properties */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
