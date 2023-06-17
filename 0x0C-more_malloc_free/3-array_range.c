#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: array value
 * @max: array value
 * Return: pointer. NULL
 */
int *array_range(int min, int max)
{
	int size, j;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(arr) * size);

	if (arr == NULL)
		return (NULL);
	for (j = min; j <= max; j++)
		arr[j] = min++;

	return (arr);
}
