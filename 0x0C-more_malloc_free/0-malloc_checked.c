#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - that allocates memory
 * @b: none negative
 * Return: pointer, 98
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(sizeof(b));

	if (i == NULL)
		exit(98);

	return (i);
}
