#include <stdio.h>
#include <Stdlib.h>
#include "dog.h"
/**
 *free_dog - frees the dogs memory allocated
 *@d: struct dog
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
