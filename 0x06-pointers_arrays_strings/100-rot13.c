#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: string being used
 *
 * Return: success.
 */

char *rot13(char *str)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x = 0;
	int y;

	while (*(str + x) != '\0')
	{
		for (y = 0; y <= 51; y++)
		{
			if (*(str + x) == a[y])
			{
				*(str + x) = rot[y];
				break;
			}
		}
		x++;
	}
	return (str);
}
