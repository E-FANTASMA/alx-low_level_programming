#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer
 *
 * Return: success
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head, *fast_ptr = head;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	slow_ptr = slow_ptr->next;
	fast_ptr = fast_ptr->next->next;
	/*while loop starting*/
	while (fast_ptr && fast_ptr->next)
	{
		if (slow_ptr == fast_ptr)
		{
			break;
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}

	if (slow_ptr != fast_ptr)
	{
		return (NULL);
	}
	slow_ptr = head;
	while (slow_ptr != fast_ptr)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	return (slow_ptr);
} /*end of code*/
