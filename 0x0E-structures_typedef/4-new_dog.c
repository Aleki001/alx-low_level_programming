#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: pointer of the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nameLength = 0, ownerLength = 0;
	dog_t *newDog;

	while (owner[ownerLength] != '\0')
		ownerLength++;
	while (name[nameLength] != '\0')
		nameLength++;

	newDog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->age = age;

	newDog->name = (char *)malloc((nameLength + 1) * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i <= nameLength; i++)
		newDog->name[i] = name[i];

	newDog->owner = (char *)malloc((ownerLength + 1) * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i <= ownerLength; i++)
		newDog->owner[i] = owner[i];

	return (newDog);
}
