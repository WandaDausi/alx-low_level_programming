#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements os a list
 * @h: elements to be printed
 * Return: number of nodes or NULL
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%d %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
