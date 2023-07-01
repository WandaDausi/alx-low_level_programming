#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of node
 * @str: string
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len;

	for (len = 0; str[len]; len++)

	add = malloc(sizeof(list_t));
	if (!add)
	return (NULL);

	add->str = strdup(str);

	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (*head);

}
