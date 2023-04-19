#include <stdio.h>
#include <stdlib.h>
/**
 *int_index - searches for an integer
 *@array: array to be searched
 *@size: size of the array
 *@cmp: function pointer
 *Return: integer found otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
