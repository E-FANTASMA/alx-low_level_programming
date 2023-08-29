#include "lists.h"

/**
 * add_nodeint_end - add node
 *
 * @head: pointer
 *
 * @n: data
 *
 * Return: success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *ptr2 = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (ptr2->next)
		ptr2 = ptr2->next;

	ptr2->next = ptr;

	return (ptr);
}
