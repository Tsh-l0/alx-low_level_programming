#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - A function that returns the length of a string
 *
 * @str: The string whose length to be found 
 *
 * Return: Length of the st dunction
 */
int _strlen(const char *str)
{
	int str_length = 0;

	while (*str++)
		str_length++;
	return (str_length);
}

/**
 * _strcpy - Function returns dest with a copy of src
 *
 * @src: The string to be copied
 * @dest: The area in memory where str will be stored
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - A function that creates a new struct dog_t
 *
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The owner of the new dog
 *
 * Return: Struct pointer to new_dog, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
