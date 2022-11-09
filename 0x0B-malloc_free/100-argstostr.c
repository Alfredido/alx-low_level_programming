#include "main.h"

/**
 * argstostr - arguments to string
 * @ac: count
 * @av: string
 *
 * Return: new concated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, s = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s =  s + strlen(av[i]);
	}

	str = malloc((s + 1 + ac) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (0);
	}

	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}

	return (str);
}
