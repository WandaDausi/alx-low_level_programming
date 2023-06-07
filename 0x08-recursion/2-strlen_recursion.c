#include "main.h"

/**
 * _strlen_recursion - functions that returns the lenght of a string
 * @s: string to be measured
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
