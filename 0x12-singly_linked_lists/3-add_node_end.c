#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *add_node_end - adds a node at the end of a list
 *
 *@head: pointer
 *
 *@str: string
 *
 *Return: success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *last;
	list_t *new_node;

	last = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (length = 0; str[length]; length++)
		;
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	return (new_node);
}
