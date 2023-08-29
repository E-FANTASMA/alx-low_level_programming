#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 *
 * @head: pointer
 *
 * @index: index of node
 *
 * Return: Success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *a = NULL;
	unsigned int inx = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (inx < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		inx++;
	}


	a = ptr->next;
	ptr->next = a->next;
	free(a);

	return (1);
}
