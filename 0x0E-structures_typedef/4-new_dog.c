#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	dog->name = malloc(i);
	if (!(dog->name))
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	for (i = 0; owner[i]; i++)
		;
	i++;
	dog->owner = malloc(i);
	if (!(dog->owner))
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		(*dog).owner[i] = owner[i];
	(*dog).owner[i] = '\0';
	return (dog);
}
