#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @x: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x == NULL)
		x = malloc(sizeof(struct dog));
	x->name = name;
	x->age = age;
	x->owner = owner;
}
