#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: file name
 *
 * @letters: number of letters
 *
 * Return: success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
	{
		free(txt);
		return (0);
	}

	b = read(a, txt, letters);

	c = write(STDOUT_FILENO, txt, b);

	close(a);

	return (c);
}
