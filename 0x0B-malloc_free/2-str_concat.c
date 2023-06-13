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
	unsigned int i, j, l, m, n;

	m = l = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			m++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			l++;
	}

	n = m + l;
	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < m; i++)
		str[i] = s1[i];
	for (j = 0; j < l; j++, i++)
		str[i] = s2[j];

	str[n] = '\0';

	return (str);
}
