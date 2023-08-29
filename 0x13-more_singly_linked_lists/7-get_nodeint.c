#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 *
 * @head: pointer
 *
 * @index: index of node
 *
 * Return: success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a  = 0;

	if (head == NULL)
		return (NULL);

	while (a < index && head != NULL)
	{
		head = head->next;
		a++;
	}
	return (head);
}
