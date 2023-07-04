#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - adds new node at the beginning of a list
 * @head: head node
 * @n: number
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp != NULL)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
