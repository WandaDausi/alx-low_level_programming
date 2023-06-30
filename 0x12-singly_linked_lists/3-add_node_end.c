#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @str: string
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * add_node_end - adds new node at te end of a list
 * @head: head or address of first element
 * @str: string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end, *old_end;

	if (str == NULL)
		return (NULL);
	new_end = malloc(sizeof(list_t));

	if (new_end == NULL)
		return (NULL);
	new_end->str = strdup(str);
	if (new_end->str == NULL)
	{
		free(new_end);
		return (NULL);
	}
	new_end->len = _strlen(new_end->str);
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	old_end = *head;
	while (old_end->next)
		old_end = old_end->next;
	old_end->next = new_end;
	return (new_end);
}
