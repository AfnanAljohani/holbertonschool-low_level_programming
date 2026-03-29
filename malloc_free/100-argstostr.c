#include "main.h"

/**
 * get_total - gets total length needed
 * @ac: argument count
 * @av: argument vector
 *
 * Return: total length
 */
int get_total(int ac, char **av)
{
	int i, j, total;

	total = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total++;
			j++;
		}
		total++;
		i++;
	}
	return (total);
}

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	total = get_total(ac, av);
	str = malloc(sizeof(char) * (total + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k++] = av[i][j++];
		}
		str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
