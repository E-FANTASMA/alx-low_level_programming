#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - concatenates arguments
 *
 *@str: string
 *
 *@av: arguments
 *
 * Return: success
 */

char **strtow(char *str)
{
	int a;
	int b;
	int c;
	int w;
	int count;
	int m;
	int wordf;
	char **p;
	char *x;

	w = 0;
	b = 0;
	a = 0;
	count = 0;
	if (*str == '\0' || str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == ' ' && (str[a + 1] != ' ' || str[a + 1] == '\0'))
			w++;
	}
	p = (char **)malloc((w + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (wordf = 0; str[wordf] && b <= w; wordf++)
	{
		count = 0;
		if (str[wordf] != ' ')
		{
			for (a = wordf ; str[a] != '\0'; a++)
			{
				if (str[a] == ' ')
					break;
				count++;
			}
			*(p + b) = (char *)malloc((count + 1) * sizeof(char));
			if (*(p + b) == NULL)
			{
				for (c = 0; c <= b; c++)
				{
					x = p[c];
					free(x);
				}
				free(p);
				return (NULL);
			}
			for (m = 0; wordf < a; wordf++)
			{
				p[b][m] = str[wordf];
				m++;
			}
			p[b][m] = '\0';
			b++;
		}
	}
	p[b] = NULL;

	return (p);
}
