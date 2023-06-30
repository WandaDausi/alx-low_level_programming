#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function that returns the length of string
 * @s: s is a character
 * Return: i
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		return (i);
}

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of node
 * @str: string
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new;

	new = (malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);

}
