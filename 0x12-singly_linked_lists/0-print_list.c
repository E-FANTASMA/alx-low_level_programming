#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t
 *
 * @h: pointer to the list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t node  = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			/*%d is to print int*/
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
