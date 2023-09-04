#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - copies the content of a file
*
* @gc: num argument
*
* @gv: str argument
*
* Return: success
*/

int main(int gc, char *gv[])
{
	int origin = -1;
	int dest;
	int num_1;
	int num_2;
	char b[1024];

	num_1 = 1024;
	num_2 = 0;

	if (gc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
		origin = open(gv[1], O_RDONLY);
	}

	if (origin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", gv[1]);
		exit(98);
	}
	dest = open(gv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", gv[2]);
		close(origin), exit(99);
	}
	while (num_1 == 1024)
	{
		num_1 = read(origin, b, 1024);
		if (num_1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", gv[1]);
			exit(98);
		}
		num_2 = write(dest, b, num_1);
		if (num_2 < num_1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", gv[2]), exit(99);
		}
	}
	if (close(origin) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origin), exit(100);

	if (close(dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
