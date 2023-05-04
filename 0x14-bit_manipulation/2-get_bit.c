#include "main.h"
/**
  *get_bit - bit at index
  *@n: decimal number
  *@index: the index
  *Return: 1 or 0 or -1 in fail
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int indexvalue;

	if (index > 63)
		return (-1);

	indexvalue = (n >> index) & 1;

	return (indexvalue);
}
