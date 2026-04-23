#include "lists.h"
#include <stdlib.h>

/**
 * _strlen_end - returns the length of a string
 * @s: the string
 *
 * Return: length of the string
 */
unsigned int _strlen_end(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup_end - duplicates a string using malloc
 * @s: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL on failure
 */
char *_strdup_end(const char *s)
{
	char *dup;
	unsigned int i, len;

	len = _strlen_end(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = s[i];
	return (dup);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: the string to be duplicated and added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = _strdup_end(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_end(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}
