#include "main.h"

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
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
