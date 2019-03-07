#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of pointers to arguments.
 * @av: matrix of arguments
 *
 * Return: pointer to a new string, or NULL it it fails.
 */

char *argstostr(int ac, char **av)
{
	char *args;
	int i, j, c, size_args;

	if (ac == 0)
		return (0);

	size_args = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			size_args++;
			j++;
		}
		i++;
	}

	args = (char *)malloc(size_args * sizeof(char));
	if (args == 0)
		return (0);

	i = 0;
	c = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			args[c] = av[i][j];
			j++;
			c++;
		}
		args[c] = '\n';
		c++;
		i++;
	}
	return (args);
}
