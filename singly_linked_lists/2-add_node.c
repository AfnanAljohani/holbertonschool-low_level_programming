#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup - duplicates a string using malloc
 * @s: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL on failure
 */
char *_strdup(const char *s)
{
	char *dup;
	unsigned int i, len;

	len = _strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = s[i];
	return (dup);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: the string to be duplicated and added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = _strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
