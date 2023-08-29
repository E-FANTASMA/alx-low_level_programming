#include "lists.h"

/**
 * sum_listint - calc sum
 *
 * @head: pointer
 *
 * Return: success
 */

int sum_listint(listint_t *head)
{
	int all;

	all = 0;

	while (head != NULL)
	{
		all += head->n;
		head = head->next;
	}
	return (all);
}
