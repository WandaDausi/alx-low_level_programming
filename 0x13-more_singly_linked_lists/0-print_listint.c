#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - a function that prints all elements of a
 * linked list
 * @h: head node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
