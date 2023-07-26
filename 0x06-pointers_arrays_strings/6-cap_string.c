#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @x: the string to be capitalized.
 *
 * Return: Success
 */

char *cap_string(char *x)
{
	int i, j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(x + i) != '\0')
	{
		if (*(x + i) >= 'a' && *(x + i) <= 'z')
		{
			if (i == 0)
			{
				*(x + i) = *(x + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(x + i - 1))
					{
						*(x + i) = *(x + i) - 32;
					}
				}
			}
		}
	i++;
	}
	return (x);
}
