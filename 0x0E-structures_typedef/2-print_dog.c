#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Age: %.6f\n", d->age);
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
