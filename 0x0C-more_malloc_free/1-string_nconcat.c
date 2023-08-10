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
	unsigned int i = 0;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[l1])
		l1++;

	if (s2 == NULL)
		s2 = "";
	while (s2[l2])
		l2++;

	if (n >= l2)
		n = l2;

	conc = malloc(sizeof(char) * ( n + 1));
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < (l1 + n); i++)
	{
		if (i < l1)
			conc[i] = *s1, s1++;
		else
			conc[i] = *s2, s2++;
	}

	conc[i] = '\0';
	return (conc);
}
