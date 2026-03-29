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
 * fill_word - fills a single word into allocated memory
 * @str: source string position
 * @word: destination
 */
void fill_word(char *str, char *word)
{
	int j;

	j = 0;
	while (str[j] != ' ' && str[j] != '\0')
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
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
	int i, k, words, len;

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
		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;
		arr[k] = malloc(sizeof(char) * (len + 1));
		if (arr[k] == NULL)
		{
			while (k > 0)
				free(arr[--k]);
			free(arr);
			return (NULL);
		}
		fill_word(str + i, arr[k]);
		i += len;
		k++;
	}
	arr[k] = NULL;
	return (arr);
}
