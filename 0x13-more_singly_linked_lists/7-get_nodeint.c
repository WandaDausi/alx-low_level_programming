#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: head node
 * @index: index of the node starting from zero
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempLink = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		tempLink = tempLink->next;
		if (tempLink == NULL)
			return (NULL);
	}
	return (tempLink);
}
