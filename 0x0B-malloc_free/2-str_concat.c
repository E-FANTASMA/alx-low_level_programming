#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: success
 */

char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	int len1;
	int len2;
	int len;
	char *con;

	len1 = len2 = 0;

	if (s1 != NULL)/*if the first string is not equal to NULL*/
	{
		a = 0;
		while (s1[a++] != '\0')
			len1++;
	}

	if (s2 != NULL)/*if the second string is not equal to NULL*/
	{
		a = 0;
		while (s2[a++] != '\0')
			len2++;
	}

	len = len1 + len2;
	con = (char *)malloc(sizeof(char) * (len + 1));
	if (con == NULL)
		return (NULL);

	for (a = 0; a < len1; a++)
		con[a] = s1[a];

	for (b = 0; b < len2; b++, a++)
		con[a] = s2[b];
	con[len] = '\0';

	return (con);
}
