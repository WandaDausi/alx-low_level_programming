#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints the number
 * of elements in a linked list print_listint
 * @h: head node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
