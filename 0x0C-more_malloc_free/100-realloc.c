#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *_realloc - reallocates the memory
 *@ptr: old allocated memory
 *@old_size: size of allocated memory
 *@new_size: size of new memory
 *Return: new allocated memory otherwise null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	int i;
	char *old_ptr = ptr;

	if (new_size == old_size)
		return (old_ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(old_ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		new_size = old_size;
	}

	for (i = 0; i < new_size; i++)
	{
		new_ptr[i] = old_ptr[i];
	}
	free(old_ptr);

	return (new_ptr);
}
