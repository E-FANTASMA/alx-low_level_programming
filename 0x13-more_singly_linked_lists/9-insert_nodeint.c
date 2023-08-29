#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 *
 * @head: pointer
 *
 * @idx: index
 *
 * @n: data
 *
 * Return: success
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int inx;
	listint_t *ptr;
	listint_t *ptr2 = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	for (inx = 0; ptr2 && inx < idx; inx++)
	{
		if (inx == idx - 1)
		{
			ptr->next = ptr2->next;
			ptr2->next = ptr;
			return (ptr);
		}
		else
			ptr2 = ptr2->next;
	}

	return (NULL);
}
