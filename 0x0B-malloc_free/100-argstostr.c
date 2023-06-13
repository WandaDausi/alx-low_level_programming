#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: int
 * @av: pointer to pointer
 * Return: pointer, NULL
 */
char *argstostr(int ac, char **av)
{
	char *str, *st;
	int i, j, k, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		st = av[i];
		j = 0;

		while (st[j++])
			l++;
		l++;
	}

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	j = 0;
	while (j < l)
	for (i = 0; i < ac; i++)
	{
		st = av[i];
		k = 0;

		for (k = 0; st[k]; k++)
		{
			str[j] = st[k];
			j++;
		}
		str[j++] = '\n';
	}
	str[j++] = '\0';

	return (str);
}
