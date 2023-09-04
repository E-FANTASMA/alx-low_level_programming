#define _POSIX_C_SOURCE 200809L
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
#define READ_NBYTES 1204

/**
 * main - copy one file into another
 *
 * @argc: count of argument
 * 
 * @argv: array of arguments to program
 *
 * Return: EXIT_SUCCESS on success, exit with error number, otherwise.
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	char buf[READ_NBYTES];
	ssize_t r;
	int dr, dw, c = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	dr = open(file_from, O_RDONLY);
	if (dr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from);
		exit(98);
	}
	dw = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (dw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((r = read(dr, buf, READ_NBYTES)))
		write(dw, buf, r);
	if (close(dw))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dw);
		c = 1;
	}
	if (close(dr))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dr);
		c = 1;
	}
	if (c)
		exit(100);
	exit(EXIT_SUCCESS);
}
