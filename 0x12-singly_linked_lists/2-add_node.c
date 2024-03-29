#include <stdlib.h>
#include <string.h>
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
	list_t *new;
	unsigned int a = 0;

	while (str[a])
		a++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = a;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

