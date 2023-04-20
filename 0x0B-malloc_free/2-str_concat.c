#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, leng, leng1, leng2;

	leng1 = leng2 = 0;

	leng = leng1 + leng2;
	str = (char *)malloc(sizeof(char) * (leng + 1));
	if (str == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			leng1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			leng2++;
	}
	for (i = 0 ; i < leng1; i++)
		str[i] = s1[i];
	for (j = 0; j < leng2; j++, i++)
		str[i] = s1[j];
	str[leng] = '\0';

	return (str);
}
