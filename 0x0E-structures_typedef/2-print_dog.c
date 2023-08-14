#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
/*pay attention to the code*/
	if (d->owner == NULL)
		d->owner = "(nil)";
/* pay attention to the print statement and remeber to alway add a new line*/
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
