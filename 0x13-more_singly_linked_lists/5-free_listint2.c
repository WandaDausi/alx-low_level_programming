#include "lists.h"
/**
 * free_listint2 - a functionbthat frees a listint_t list
 * @head: head of the linked list
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head != NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
