#include "main.h"

/**
 * leet - change vowels to numbers.
 *
 * @x: string to be worked with.
 *
 * Return: success
 */

char *leet(char *x)
{
	char let[] = "aeotlAEOTL";
	char num[] = "4307143071";
	int i = 0;
	int j;

	while (*(x + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(x + i) == let[j])
			{
				*(x + i) = num[j];
			}
		}
		i++;
	}
	return (x);
}
