#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer
 * Return: Pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	temp = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next;
	}
	*head = temp;
	return (*head);
}
