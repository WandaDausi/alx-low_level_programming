#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to array of integers
 * @width: integers width
 * @height: another dimension of an array
 * Return: pointer and NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(arr[i]);
				free(arr);
				i--;
				return (NULL);
			}
		}
		i++;
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
