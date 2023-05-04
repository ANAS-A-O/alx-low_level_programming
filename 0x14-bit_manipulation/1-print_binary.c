#include "main.h"
/**
  *print_binary - from dec to binary
  *@n: decimal number
  *Return: binary format
  */
void print_binary(unsigned long int n)
{
	int m;
	int nfois = 0;

	for (m = 63; m >= 0; m--)
	{
		unsigned int index = n >> m;

		if (index & 1)
		{
			_putchar('1');
			nfois++;
		}
		else if (nfois)
			_putchar('0');
	}
	if (!nfois)
		_putchar('0');
}
