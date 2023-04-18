#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
printf("name: %s\n", d->name);
else
printf("name: (nil)\n");
printf("age: %.6f\n", d->age);
if (d->owner)
printf("owner: %s\n", d->owner);
else
printf("owner: (nil)\n");
}
}

