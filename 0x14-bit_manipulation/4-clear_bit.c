#include "main.h"
/**
  *clear_bit - clear at index bit
  *@n: pointer to int
  *@index: the index of int
  *Return: 1 or -1 in faild
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > 63)
		return (-1);

	*n &= (~(i << index));

	return (1);
}
