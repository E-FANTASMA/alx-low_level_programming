#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be searche
 *
 * @needle: substring to be located
 *
 * Return: success
 */

char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		a = 0;

		if (haystack[a] == needle[a])
		{
			do {

				if (needle[a + 1] == '\0')
					return (haystack);

				a++;

			} while (haystack[a] == needle[a]);
		}

		haystack++;
	}

	return ('\0');
}
