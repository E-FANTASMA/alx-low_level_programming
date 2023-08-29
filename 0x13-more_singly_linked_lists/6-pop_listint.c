#include "lists.h"

/**
 * pop_listint - delete the head node
 *
 * @head: pointer
 *
 * Return: success
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (x);
}
