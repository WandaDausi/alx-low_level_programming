#include "main.h"
#include <stdlib.h>

/**
 * _memo - fills memory
 * @st: memory
 * @a: char
 * @n: times
 * Return: pointer
 */
char *_memo(char *st, char a, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		st[i] = a;
		i++;
	}
	return (st);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	_memo(arr, 0, nmemb * size);
	return (arr);
}
