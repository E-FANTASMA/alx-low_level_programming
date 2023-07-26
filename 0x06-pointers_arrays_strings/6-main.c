#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str1[] = "Expect the best. Prepare for the worst.";
	char str2[] =	"Capitalize on what comes.";
	char str3[] = "\nhello world! hello-world 0123456hello world";
	char str4[] = "\thello world.hello world\n";
	char str[] = str1 + str2 + str3 + str4;
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
