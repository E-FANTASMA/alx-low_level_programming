#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements
 *
 * @h: pointer
 *
 * Return: success
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
