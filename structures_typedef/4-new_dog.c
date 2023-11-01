#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name for the new dog struct type dog_t
 * @age: age for the new dog struct type dog_t
 * @owner: owner for the new dog struct type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = copy_string(name);
	new_dog->owner = copy_string(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	return (new_dog);
}
