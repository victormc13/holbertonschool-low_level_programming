#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type `struct dog`
 * @d: type struct dog
 * @name: name for the dog of type struct dog
 * @age: age for the dog of type struct dog
 * @owner: owner of the dog of type struct dog
 * Return: void
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
