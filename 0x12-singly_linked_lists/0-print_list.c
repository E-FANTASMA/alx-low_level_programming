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
	size_t count = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		printf("[%lu] %s\n", count++, node->str);
		node = node->next;
	}
	return (count);
}
