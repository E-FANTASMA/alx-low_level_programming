#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string to be concatenated
 *
 * @s2: second string to be concatenated
 *
 * @n: unsigned int
 *
 * Return: success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len;
	unsigned int i;

	len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	conc = malloc((len + 1) * sizeof(char));

	if (conc == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		conc[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		conc[len++] = s2[1];

	conc[len] = '\0';

	return (conc);
}
