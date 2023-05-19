#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character u to stdout
 * @u: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char u)
{
	return (write(1, &u, 1));
}
