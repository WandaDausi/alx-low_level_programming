#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate arguments
 * @ac: arg count
 * @av: arg vector
 * Return: pointer. NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int leng = 0;
	char *st, *z;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		z = av[i];
		j = 0;

		while (z[j++])
			leng++;
		leng++;
	}

	st = malloc(sizeof(char) * (leng + 1));
	if (st == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < leng; i++)
	{
		z = av[i];
		k = 0;

		while (z[k])
		{
			st[j] = z[k];
			k++;
			j++;
		}
		st[j++] = '\n';
	}
	st[j++] = '\0';

	return (st);
}
