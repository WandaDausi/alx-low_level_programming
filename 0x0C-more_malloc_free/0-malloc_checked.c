#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the number of bytes allocated
 * Return: a pointer to allocated memory, if malloc fails cause a termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *allo;

	allo = malloc(b);
		if (allo == NULL)
			exit(98);
	return (allo);
}
