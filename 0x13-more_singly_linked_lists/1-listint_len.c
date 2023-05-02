#include "lists.h"
/**
 *listint_len - returns no of elements
 *@h: head pointer
 *Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}

	return (number);

}
