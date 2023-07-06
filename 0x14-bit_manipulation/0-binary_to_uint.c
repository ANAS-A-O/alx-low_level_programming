#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: string containing the  number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decval = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decval = 2 * decval + (b[i] - '0');
	}

	return (decval);
}
