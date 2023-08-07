#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 *
 * @ac: count
 *
 * @av: vector
 *
 * Return: success
 */

char *argstostr(int ac, char **av)
{
	char *s1;
	char *s;
	int a, b, c, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		s = av[a];
		b = 0;

		while (s[b++])
			len++;
		len++;
	}

	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (s1 == NULL)
		return (NULL);

	for (a = 0, b = 0; a < ac && b < len; a++)
	{
		s = av[a];
		c = 0;

		while (s[c])
		{
			s1[b] = s[c];
			b++;
			c++;
		}
		s1[b++] = '\n';
	}
	s1[b] = '\0';

	return (s1);
}
