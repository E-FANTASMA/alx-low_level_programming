#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: pointer
 *
 * Return: success
 */

size_t print_listint_safe(const listint_t *head)
{
	listnode_t *node;
	size_t len;

	node = NULL;
	len = 0;

	while (!is_in_nodes(node, head))
	{
		if (!add_nodeptr(&node, head))
		{
			free_listnode(node);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		len++;
		head = head->next;
	}
	if (head != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);
	free_listnode(node);
	return (len);
}

/**
 * add_nodeptr - adds a new node
 *
 * @head: pointer
 *
 * @ptr: value of new node
 *
 * Return: success
 */

listnode_t *add_nodeptr(listnode_t **head, const listint_t *ptr)
{
	listnode_t *node;

	node = malloc(sizeof(listnode_t));
	if (node == NULL)
		return (NULL);
	node->ptr = (listint_t *)ptr;
	node->next = *head;
	*head = node;
	return (node);
}

/**
 * free_listnode - frees a list
 *
 * @head: pointer
 */
void free_listnode(listnode_t *head)
{
	if (head == NULL)
		return;
	free_listnode(head->next);
	free(head);/*frees head*/
}

/**
 * is_in_nodes - checks an address
 *
 * @head: node
 *
 * @ptr: address
 *
 * Return: success
 */

int is_in_nodes(listnode_t *head, const listint_t *ptr)
{
	if (ptr == NULL)
		return (1);
	while (head != NULL)
	{
		if (ptr == head->ptr)
			return (1);
		head = head->next;
	}
	return (0);/*code by E-FANTASM*/
}
