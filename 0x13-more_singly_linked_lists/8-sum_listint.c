#include "lists.h"
/**
 *sum_listint - returns sum of all data in the list
 *@head: head node
 *REturn: sum otherwise null
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;
	node = head;

	while (node != 0)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
