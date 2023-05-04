#include "main.h"
/**
  *get_endianness - see if machine big or little
  *Return: 1 for little 0 for big
  */
int get_endianness(void)
{
	unsigned int n = 1;

	char *s = (char *) &n;

	return (*s);
}
