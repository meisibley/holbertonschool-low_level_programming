#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a structure for dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: no return
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
