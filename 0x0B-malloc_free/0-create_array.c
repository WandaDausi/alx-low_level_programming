#include "main.h"
#include <stdlib>

/**
 * create_array - creates array of chars and initializes it with a specifi char
 * @size: the size of array
 * @c: initial value
 * Return: a pointer or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size)
		if (array == 0)
			return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
