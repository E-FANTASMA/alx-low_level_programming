#include "main.h"

/**
 *  _strspn - gets the length of a prefix substring
 *
 *  @s: string to be used
 *
 *  @accept: string containing required characters
 *
 *  Return: success
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	a = 0;
	while (str1[a] != '\0')
	{
		b = 0;
		while (str2[b] != '\0')
		{
			if (str2[b] == str1[a])
			{
				c++;
				break;
			}
			b++;
		}
		if (s[a] != accept[b])
		{
			break;
		}
		a++;
	}
	return (c);
}
