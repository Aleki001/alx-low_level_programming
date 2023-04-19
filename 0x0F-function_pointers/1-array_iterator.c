#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator - iterates over array elements
 *@array: array to be iterated
 *@size: size of the array
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size != 0 && action != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}
}
