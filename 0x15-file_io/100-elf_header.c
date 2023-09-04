#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * _is_elf - checks a file
 *
 * @h: header
 *
 * Return: success
 */

void _is_elf(char *h)
{
	if (h[0] != 0x7f || h[1] != 'E' || h[2] != 'L' || h[3] != 'F')
		dprintf(STDERR_FILENO, "Error: file is not ELF type"), exit(98);
}

/**
 * print_magic - prints
 *
 * @h: header
 *
 * Return: success
 */

void print_magic(char *h)
{
	int index;

	printf("ELF Header:\n  Magic:   ");

	for (index = 0; index < 15; index++)
		printf("%02x ", (unsigned int)h[index]);
	printf("%02x", (unsigned int)h[index]);

	printf("\n");
}

/**
 * print_class - prints
 *
 * @h: header
 *
 * @bits64: unknow
 *
 * Return: success
 */

void print_class(char *h, int bits64)
{
	if (h[4] != 1 && h[4] != 2)
	{
		printf("<unknown: %02hx is not a class>\n", h[4]);
		return;
	}
	printf("Class:                             ");
	if (bits64 == 0)
		printf("ELF32\n");
	else if (bits64 == 1)
		printf("ELF64\n");
}

/**
 * print_data - print
 *
 * @h: header
 *
 * Return: success
 */

void print_data(char *h)
{
	printf("Data:                              2's complement, ");
	if (h[5] == 1)
		printf("little endian\n");
	else if (h[5] == 2)
		printf("big endian\n");
	else
		printf("<unknown: %02hx is not a elf data>\n", h[4]);
}

/**
 * print_version - print
 *
 * @h: header
 *
 * Return: success
 */

void print_version(char *h)
{
		printf("  %-35s", "Version:");
	if (h[6] == EV_CURRENT)
	{
		printf("%d (current)\n", h[6]);
	}
	else if (h[6] != EV_CURRENT)
	{
		printf("%d\n", h[6]);
	}
}

/**
 * print_os_abi - prints
 *
 * @h: header
 *
 * Return: success
 */

void print_os_abi(char *h)
{
	printf("  %-35s", "OS/ABI:");

	if (h[7] == 0)
		printf("UNIX - System V\n");
	else if (h[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (h[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (h[7] == 3)
		printf("UNIX - Linux\n");
	else if (h[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (h[7] == 6)
		printf("UNIX - Solaris\n");
	else if (h[7] == 7)
		printf("UNIX - AIX\n");
	else if (h[7] == 8)
		printf("UNIX - IRIX\n");
	else if (h[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (h[7] == 10)
		printf("UNIX - Tru64\n");
	else if (h[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (h[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (h[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (h[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (h[7] == 15)
		printf("UNIX - AROS\n");
	else if (h[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (h[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02hx>\n", h[7]);
}

/**
 * print_abiv - print
 *
 * @h: header
 *
 * Return: success
 */

void print_abiv(char *h)
{
	printf("  %-35s", "ABI Version:");
	printf("%d\n", h[8]);
}

/**
 * print_type - prints
 *
 * @h: header
 *
 * @bitss64: unknown
 *
 * Return: success
 */

void print_type(char *h, unsigned int bits64)
{
	int xtype = 17;

	(void) bits64;

	if (h[5] == 1)
		xtype = 16;

	printf("  %-35s", "Type:");

	switch (h[xtype])
	{
	case 0:
		printf("NONE\n");
		break;
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	case 4:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>: %02x\n", h[xtype]);
	}
}

/**
 * print_entry_point_address - prints
 *
 * @h: header
 *
 * @bits42: unknown
 *
 * Return: success
 */

void print_entry_point_address(char *h, unsigned int bits64)
{

	int index;
	int cnt;
	
	cnt = 27;

	printf("  %-35s0x", "Entry point address:");

	if (bits64 == 1)
		cnt = 31;

	if (h[5] == 1)
	{
		index = cnt;
		while (h[index] == 0 && index > 24)
			index--;
		printf("%x", h[index]);
		index--;

		while (index >= 24)
		{
			printf("%02x", (unsigned char) h[index]);
			index--;
		}
	}
	else
	{

		index = 24;
		while (h[index] == 0)
			index++;
		printf("%x", h[index]);
		index++;

		while (index <= cnt)
		{
			printf("%02x", (unsigned char) h[index]);
			index++;
		}
	}
	printf("\n");
}

/**
 * main - starting....
 *
 * @argc: num of gv
 *
 * @argv: argv
 *
 * Return: success
 */

int main(int argc, char **argv)
{
	int fd, r, close_elf, bits64 = 0;
	char h[16];

	if (argc != 2)
		dprintf(STDERR_FILENO, "wrong number of arguments\n"), exit(98);
	if (argv[1] == 0)
		dprintf(STDERR_FILENO, "Please enter a name, Null error\n"), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file\n"), exit(98);
	r = read(fd, h, 32);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error Reading File\n"), exit(98);
	_is_elf(h);
	if (h[4] == 2)
		bits64 = 1;

	print_magic(h);
	print_class(h, bits64);
	print_data(h);
	print_version(h);
	print_os_abi(h);
	print_abiv(h);
	print_type(h, bits64);
	print_entry_point_address(h, bits64);

	close_elf = close(fd);
	if (close_elf == -1)
		dprintf(STDERR_FILENO, "Error closing FD Elf\n"), exit(98);
	return (0);
}
