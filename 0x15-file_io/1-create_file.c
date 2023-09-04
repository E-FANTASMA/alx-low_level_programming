#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: pointer
 *
 * @text_content: content of file
 *
 * Return: success
 */

int create_file(const char *filename, char *text_content)
{
	int index;
	int doc;

	index = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}


	while (text_content[index] != '\0')
	{
		index++;
	}

	doc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (doc == -1)
		return (-1);

	write(doc, text_content, index);

	return (1);
}
