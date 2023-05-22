#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @w: struct dog to free
 */
void free_dog(dog_t *w)
{
	if (w)
	{
		free(w->name);
		free(w->owner);
		free(w);
	}
}
