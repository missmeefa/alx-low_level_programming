#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @w: struct dog to print
 */
void print_dog(struct dog *w)
{
	if (w == NULL)
		return;

	if (w->name == NULL)
		w->name = "(nil)";
	if (w->owner == NULL)
		w->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", w->name, w->age, w->owner);
}
