#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text
 *
 * @filename: pointer
 *
 * @text_content: content of file
 *
 * Return: success
 */

int append_text_to_file(const char *filename, char *text_content)
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

	doc = open(filename, O_WRONLY | O_APPEND);

	if (doc == -1)
		return (-1);

	write(doc, text_content, index);

	return (1);
}
