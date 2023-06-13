#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; s2[j] != '\0'; j++)
		s1[i + j] = str[j];


	str = malloc((sizeof(char) * j) + 1);
	if (str = NULL)
		return (NULL);

	str[j] = '\0';

	return (str);
}
