#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a list
 *
 * @h: pointer
 *
 * Return: success
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *a;
	listnode_t *node;
	size_t len;

	node = NULL;
	len = 0;

	if (h == NULL)
		return (0);

	while (!is_in_nodes(nodes, *h))
	{
		if (!add_nodeptr(&node, *h))
		{
			free_listnode(node);
			exit(98);
		}
		a = *h;
		*h = (*h)->next;
		free(a);
		/*++ addsa 1*/
		len++;
	}
	if (*h != NULL)
		*h = NULL;

	free_listnode(node);
	return (len);
}
