#include "lists.h"

/**
 * list_len - funcstion that returns the number of elements in a linked list
 * @h: name of list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int n;

	for (n = 0; h; n++)
		h = h->next;
	return (n);
}
