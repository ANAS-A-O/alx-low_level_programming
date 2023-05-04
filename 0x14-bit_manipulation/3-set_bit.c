#include "main.h"
/**
  *set_bit - set a bit
  *@n: pointer of a integer
  *@index: the bit index
  *Return: 1 or -1 in fail
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > 63)
		return (-1);

	*n |= (i << index);

	return (1);
}


