#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns number of elements in a linked list
 * @h: head node
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
