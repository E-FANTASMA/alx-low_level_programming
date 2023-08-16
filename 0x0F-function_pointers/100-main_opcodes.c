#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 *
 * @argc: number of arguments
 *
 * @argv: array of pointers
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int b;/* b is to represent the number of bytes*/
	int i;
	int (*address)(int, char **) = main;
	unsigned char opcode;
	/**
	 * an opcode (abbreviated from operation code, also known as instruction
	 * machine code, instruction code, instruction syllable, instruction
	 * parcel or opstring) is the portion of a machine language
	 *instruction that specifies the operation to be performed.
	 */

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == b - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
