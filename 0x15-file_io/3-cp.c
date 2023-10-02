#include "main.h"
#include <stdio.h>

/**
 * error_file - checks files
 *
 * @ftx1: file base
 *
 * @ftx2: file destination
 *
 * @vec: vector
 *
 * Return: success
 */
void error_file(int ftx1, int ftx2, char *vec[])
{
	if (ftx1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", vec[1]);
		exit(98);
	}
	if (ftx2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", vec[2]);
		exit(99);
	}
}
