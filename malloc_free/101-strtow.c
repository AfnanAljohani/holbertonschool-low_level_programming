#include "main.h"

/**
 * count_words - counts words in a string
 * @str: the string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int i, count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

/**
 * word_len - returns length of a word
 * @str: pointer to start of word
 *
 * Return: length
 */
int word_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != ' ' && str[len] != '\0')
		len++;
	return (len);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to array of strings, or NULL if it fails
 */
char **strtow(char *str)
{
	char **arr;
	int i, j, k, words, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (k < words)
	{
		while (str[i] == ' ')
			i++;

		len = word_len(str + i);
		arr[k] = malloc(sizeof(char) * (len + 1));
		if (arr[k] == NULL)
		{
			while (k > 0)
			{
				k--;
				free(arr[k]);
			}
			free(arr);
			return (NULL);
		}
		j = 0;
		while (j < len)
		{
			arr[k][j] = str[i];
			i++;
			j++;
		}
		arr[k][j] = '\0';
		k++;
	}
	arr[k] = NULL;
	return (arr);
}
