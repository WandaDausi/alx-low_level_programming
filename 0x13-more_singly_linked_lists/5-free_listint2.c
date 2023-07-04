#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a linked list
 * @head: pointer to pointer of first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
