#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @z: points to string containing binary number
 *
 * Return: converted number or 0 when error
 */
unsigned int binary_to_uint(const char *z)
{
	int i;
	unsigned int count = 0;

	if (!z)
		return (0);

	for (i = 0; z[i]; i++)
	{
		if (z[i] < '0' || z[i] > '1')
			return (0);
		count = 2 * count + (z[i] - '0');
	}

	return (count);
}
