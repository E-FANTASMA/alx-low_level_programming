#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: pointer
 *
 * @text_content: file
 *
 * Description: Create a function that creates a file using proper req
 *
 * Return: success
 */

int create_file(const char *filename, char *text_content)
{
	int a = 0, ftx;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[a] != '\0')
	{
		a++;/*inciment by !*/
	}

	ftx = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ftx == -1)
		return (-1);

	write(ftx, text_content, a);

	return (1);
}
