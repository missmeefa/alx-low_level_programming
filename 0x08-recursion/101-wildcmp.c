#include "main.h"

/**
 * wildcmp - Compare strings
 * @x: pointer to string params
 * @y: pointer to string params
 * Return: 0
 */

int wildcmp(char *x, char *y)
{
	if (*x == '\0')
	{
		if (*y != '\0' && *y == '*')
		{
			return (wildcmp(x, y + 1));
		}
		return (*y == '\0');
	}

	if (*y == '*')
	{
		return (wildcmp(x + 1, y) || wildcmp(x, y + 1));
	}
	else if (*x == *y)
	{
		return (wildcmp(x + 1, y + 1));
	}
	return (0);
}
