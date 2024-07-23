#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the struct dog
 *
 * @d: The pointer of struct dog to be freed
 *
 * Return: 0 (Success)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
