#include <stdio.h>
#include "dog.h"2
#include <stddef.h>
/**
 * print_dog - is the print dog details function
 * @d: is the pointer to the dog structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d-owner ? d->owner : "(nil)");
	}
}
