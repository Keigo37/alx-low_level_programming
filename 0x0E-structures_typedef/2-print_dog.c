#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints details of a dog
 * @d: A pointer to the struct dog to be printed
 * Description: This function prints the details of a dog.
 * If any of these details is NULL, it prints "(nil)" for that field.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
