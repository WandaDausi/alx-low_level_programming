#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head pointer
 * @index: node indexing
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  count = 0;

	if (head == NULL)
		return (NULL);
	while (count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
