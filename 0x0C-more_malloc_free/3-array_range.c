#include "main.h"
#include <stdlib.h>

/*
 *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *x;
	int size;
	int y;

	size = max - min + 1;

	x = malloc(sizeof(int) * size);

	if (x == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		x[y] = min++;
		return (x);
}
