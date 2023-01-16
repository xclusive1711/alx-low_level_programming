#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - gets a length of string
 * @str: the string to get the length
 * Return: returns the length of @str
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - returns @dest with a string from @src
 * @src: string to copy
 * @dest: copy string to this declaration
 * Return: returns @dest
 */

char *_strcopy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Return: returns struct pointer dog
 * and NULL if function fails
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

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
