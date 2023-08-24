#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list
 *
 *@head: pointer
 *
 *@str: string
 *
 *Return: success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;

	len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[len])
		len++;
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
