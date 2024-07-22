#include "dog.h"

/**
 * init_dog - Initializes the dog structure
 *
 * @d: Pointer to struct dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/* (*d).name = name; */
		d->name = name;
		/* (*d).age = age; */
		d->age = age;
		/* (*d).owner = owner; */
		d->owner = owner;
	}
}
