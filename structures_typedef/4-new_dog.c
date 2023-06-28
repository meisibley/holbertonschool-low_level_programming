#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new struct dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: a pointer point new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o;
	dog_t *ndog;

	n = strlen(name);
	o = strlen(owner);
	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(sizeof(char) * n + 1);
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * o + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	strcpy(ndog->name, name);
	ndog->age = age;
	strcpy(ndog->owner, owner);
	return (ndog);
}
