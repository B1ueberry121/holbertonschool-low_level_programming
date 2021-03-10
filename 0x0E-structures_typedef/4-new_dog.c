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
 * @name:
 * @age:
 * @owner:
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lemon;
	int len = 0, len2 = 0, x;

	lemon = (dog_t*) malloc(sizeof(dog_t));

	if (lemon == NULL)
	{
		return (NULL);
	}
	len = str_length(name);
	len2 = str_length(owner);

	lemon->name = malloc(sizeof(char) * len + 1);
	lemon->owner = malloc(sizeof(char) * len2 + 1);

	if (lemon->name == NULL)
	{
		return (NULL);
	}
	if (lemon->owner == NULL)
	{
		return(NULL);
	}
	for (x = 0; name != '\0'; x++)
	{
		lemon->name[x] = name[x];
	}

	for (x = 0; owner != '\0'; x++)
	{
		lemon->owner[x] = owner[x];
	}

	lemon->age = age;

	return (lemon);
}
