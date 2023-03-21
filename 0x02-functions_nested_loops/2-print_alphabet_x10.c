#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
	int m;
	int v;

	for (m = 0; m <= 9; m++)
	{
		for (v = 97; v <= 122; v++)
		{
			_putchar(v);
		}
	}
	_putchar('\n');
}

