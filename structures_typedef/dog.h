#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A type struct dog
 * @name: Name of dog
 * @owner: Owner of the dog
 * @age: Age of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
