#include <stdlib.h>
#include "dog.h"

/**
 * str_len - returns the length of a string
 * @s: the string
 *
 * Return: length of string
 */
int str_len(char *s)
{
	int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * str_cpy - copies a string into newly allocated memory
 * @s: the string to copy
 *
 * Return: pointer to new string, or NULL on failure
 */
char *str_cpy(char *s)
{
	char *copy;
	int i, len;

	if (s == NULL)
		return (NULL);
	len = str_len(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		copy[i] = s[i];
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = str_cpy(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = str_cpy(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
