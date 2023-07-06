#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask = 1UL << index;
	bit_val = (n & mask) >> index;

	return (bit_val);
}
