#include "main.h"
/**
  *flip_bits - difference entre two numbers
  *@n: number 1
  *@m: number 2
  *Return: nfois
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int nfois = 0;
	unsigned long int now, xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		now = xor >> i;
		if (now & 1)
			nfois++;
	}
	return (nfois);
}
