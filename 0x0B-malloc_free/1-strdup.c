#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to newly allocated space in memory
 * which contains a copy of the string given as parameter
 * @str: pointer to array of chars
 * Return: pointer and NUll
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	cpy = malloc((sizeof(char) * j) + 1);
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		cpy[i] = str[i];
	cpy[j] = '\0';

	return (cpy);
}
