#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of a listint_t list
 *
 * @h: pointer
 *
 * Return: success
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
