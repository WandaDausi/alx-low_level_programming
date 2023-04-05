#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - a function that adds new node at the beginning
 * of a listint_t list
 * listint_s: node function
 * @n: number of  elements
 * @head: .....
 * Return: NULL. Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node
		= malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	while (new_node == NULL)
		return (NULL);
	return (new_node);

}
