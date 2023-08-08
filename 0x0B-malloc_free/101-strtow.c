#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void main_one(char **, char *);
void word(char **, char *, int, int, int);

/**
 * strtow - divide a given string into words.
 *
 * @str: string to be divided
 *
 * Return: success
 */

char **strtow(char *str)
{
	int a, b, len;
	char **wrd;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	a = b = len = 0;
	while (str[a])
	{
		if (b == 0 && str[a] != ' ')
			b = 1;
		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			b = 0;
			len++;
		}
		a++;
	}

	len += b == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	wrd = (char **)malloc(sizeof(char *) * (len + 1));
	if (wrd == NULL)
		return (NULL);

	main_one(wrd, str);
	wrd[len] = NULL;
	return (wrd);
}

/**
 * main_one - fetches words to an array
 *
 * @wrd: words
 *
 * @str: string to be used
 */

void main_one(char **wrd, char *str)
{
	int a, b, c, d;

	a = b = c = 0;
	while (str[a])
	{
		if (d == 0 && str[a] != ' ')
		{
			c = a;
			d = 1;
		}

		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			word(wrd, str, c, a, b);
			b++;
			d = 0;
		}

		a++;
	}

	if (d == 1)
		word(wrd, str, c, a, b);
}

/**
 * word - creates a word and insert it into the array
 *
 * @wrd: the array of strings
 *
 * @str: string
 *
 * @start: starting
 *
 * @end: the stopping index of the word
 *
 * @index: index of array
 */

void word(char **wrd, char *str, int start, int end, int index)
{
	int a, b;

	a = end - start;
	wrd[index] = (char *)malloc(sizeof(char) * (a + 1));

	for (b = 0; start < end; start++, b++)
		wrd[index][b] = str[start];
	wrd[index][b] = '\0';
}
