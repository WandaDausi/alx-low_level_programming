#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - release memory
 * @head: first node pointer
 * Return: void
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
