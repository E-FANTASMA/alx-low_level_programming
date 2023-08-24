#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 *
 * @h: pointer
 *
 * return: success
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		len++;
		node = node->next;
	}

	return (len);
}
