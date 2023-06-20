#include "dog.h"

/**
 * init_dog - unitialize a variable type struct dog
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
