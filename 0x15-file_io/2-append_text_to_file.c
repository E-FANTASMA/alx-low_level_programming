#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - that appends text
 *
 * @filename: variable
 *
 * @text_content: file
 *
 * Description: function that appends text
 *
 * Return: success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a = 0, ftx;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[a] != '\0')
	{
		a++;
	}

	ftx = open(filename, O_WRONLY | O_APPEND);

	if (ftx == -1)
		return (-1);

	write(ftx, text_content, a);

	return (1);
}
