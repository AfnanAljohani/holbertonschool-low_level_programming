#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name:\t\t%s\n", d->name ? d->name : "(nil)");
	printf("Age:\t\t%.6f\n", d->age);
	printf("Owner:\t\t%s\n", d->owner ? d->owner : "(nil)");
}
