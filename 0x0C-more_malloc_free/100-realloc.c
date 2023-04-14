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

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	free(ptr);

	return (new_ptr);
}
