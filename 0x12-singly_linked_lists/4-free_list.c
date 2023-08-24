#include "lists.h"
#include <stdlib.h>
/**
 *free_list - frees memory occupied by a list
 *
 *@head: pointer
 *
 *Return: success
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
