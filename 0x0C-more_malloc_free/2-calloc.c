#include "main.h"
#include <stdlib.h>

/*
 * _calloc -  function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: number of elements in an array
 * @size: number of bytes alllocated
 * Return: NULL if nmemb or size is 0 or if _calloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;
	return (x);

}
