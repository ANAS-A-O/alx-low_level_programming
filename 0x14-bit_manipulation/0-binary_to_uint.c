#include "main.h"
/**
  *binary_to_uint - change binary to decimal
  *@b: binary format
  *Return: decimal number or 0 in failed
  */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int base2 = 0;

	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
	{
		if (b[n] > '1' || b[n] < '0')
			return (0);
		base2 = (base2 * 2) + (b[n] - '0');
	}
	return (base2);
}
