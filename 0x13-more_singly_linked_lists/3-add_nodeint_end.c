#include "lists.h"
/**
 * add_nodeint_end - a function that adds new node at the end
 * of the function
 * @n: data for the nodes
 * @head: adress of the head node
 * Return: NULL or address of new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (!new_node)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
