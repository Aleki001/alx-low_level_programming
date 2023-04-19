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
	int j;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (j = 0; j < size; j++)
			{
				if (cmp(array[j]))
				{
					return (j);
				}
			}
		}
	}

	return (-1);
}
