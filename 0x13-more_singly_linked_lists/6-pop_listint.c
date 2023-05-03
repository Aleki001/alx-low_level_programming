#include "lists.h"
/**
 *pop_listint - deletes the first node (head)
 *@head: head pointer
 *Return: heads data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (*head == 0)
		return (0);

	node = *head;
	data = node->n;
	*head = (*head)->next;
	free(node);

	return (data);
}
