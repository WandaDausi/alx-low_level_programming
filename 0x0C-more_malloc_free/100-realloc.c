#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size
 * @new_size: new size in bytes
 * Return: pointer. NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *arr;
	int *ol;
	unsigned int i, j = new_size;
	ol = ptr;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
			return (ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	i = 0;
	while (i < j)
	{
		arr[i] = ol[i];
		i++;
	}
	free(ptr);
	return (arr);
}
