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

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
