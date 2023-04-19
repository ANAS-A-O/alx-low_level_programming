#include "function_pointers.h"
/**
  *int_index - return index if true
  *@array: the array
  *@size: the size of array
  *@cmp: pointer to func of 3 in main
  *Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}



