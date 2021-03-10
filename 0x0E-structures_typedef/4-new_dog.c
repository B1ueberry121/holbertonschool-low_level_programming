#include "dog.h"
#include <stdlib.h>

/**
 * str_length - checks the length of the string
 * @s: string
 * Return: the length of the string
 */

int str_length(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the allocated memory
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lemon;
	int len = 0, len2 = 0, x;

	lemon = (dog_t *) malloc(sizeof(dog_t));

	if (lemon == NULL)
	{
		return (NULL);
	}
	len = str_length(name);
	len2 = str_length(owner);

	lemon->name = malloc(sizeof(char) * len + 1);

	if (lemon->name == NULL)
	{
		free(lemon);
		return (NULL);
	}
	lemon->owner = malloc(sizeof(char) * len2 + 1);

	if (lemon->owner == NULL)
	{
		free(lemon);
		free(lemon->name);
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
	{
		lemon->name[x] = name[x];
	}
	lemon->name[x] = '\0';

	for (x = 0; owner[x] != '\0'; x++)
	{
		lemon->owner[x] = owner[x];
	}
	lemon->owner[x] = '\0';
	lemon->age = age;
	return (lemon);
}
