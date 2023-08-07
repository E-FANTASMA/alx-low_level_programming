#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: success
 */

char *_strdup(char *str)
{
	char *dupl;
	int a;
	int len;

	len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
		len++;

	dupl = malloc(len * sizeof(char) + 1);
	if (dupl == NULL)
		return (NULL);

	for (a = 0; a < len; a++)
		dupl[a] = str[a];
	dupl[len] = '\0';

	return (dupl);
}
