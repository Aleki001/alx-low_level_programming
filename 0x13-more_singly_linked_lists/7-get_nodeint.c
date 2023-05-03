#include "lists.h"
/**
 *get_nodeint_at_index - return the nth node
 *@head: head node
 *@index: index
 *Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (!temp)
	{
		return (0);
	}

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i != index)
		return (0);

	return (temp);
}
