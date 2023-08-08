#include "main.h"
#include <stdlib.h>

int wrd_len(char *s);
int wrd_cnt(char *str);
char **strtow(char *str);

/**
 * wrd_len - locates the index marking
 *
 * @s:  string used
 *
 * Return: success
 */

int wrd_len(char *s)
{
	int i = 0, len = 0;/* len means length*/

	while (*(s + i) && *(s + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * wrd_cnt - counts words in a string
 *
 * @s: string
 *
 * Return: success
 */

int wrd_cnt(char *s)
{
	int i = 0, wrd = 0, len = 0;

	for (i = 0; *(s + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(s + i) != ' ')
		{
			wrd++;
			i += wrd_len(s + i);
		}
	}

	return (wrd);
}

/**
 * strtow - Splits a string into words
 *
 * @str: string to be split.
 *
 * Return: success
 */

char **strtow(char *str)
{
	char **st;
	int i = 0, wrd, w, lt, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wrd = wrd_cnt(str);
	if (wrd == 0)
		return (NULL);

	st = malloc(sizeof(char *) * (wrd + 1));
	if (st == NULL)
		return (NULL);

	for (w = 0; w < wrd; w++)
	{
		while (str[i] == ' ')
			i++;

		lt = wrd_len(str + i);

		st[w] = malloc(sizeof(char) * (lt + 1));

		if (st[w] == NULL)
		{
			for (; w >= 0; w--)
				free(st[w]);

			free(st);
			return (NULL);
		}

		for (l = 0; l < lt; l++)
			st[w][l] = str[i++];

		st[w][l] = '\0';
	}
	st[w] = NULL;

	return (st);
}
