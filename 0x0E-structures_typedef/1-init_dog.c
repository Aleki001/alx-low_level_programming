#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initializes variable of type struct dog
 *@d: class dog
 *@name: name of the dog
 *@age: dog's age
 *@owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
