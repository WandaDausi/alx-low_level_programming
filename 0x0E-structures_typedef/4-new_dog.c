#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, new, old;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	new = 0;
	while (name[new])
	{
		new++;
		;
	}
	new++;
	dog->name = malloc(new * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < new; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (old = 0; owner[old]; old++)
		;
	old++;
	dog->owner = malloc(old * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < old; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
