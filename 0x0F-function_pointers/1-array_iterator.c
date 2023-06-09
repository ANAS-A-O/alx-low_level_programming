#include "function_pointers.h"
#include <stdio.h>
/**
  *array_iterator - print elements of a given a array
  *@array: the array
  *@size: size of array
  *@action: pointer to print in regular or hex
  *Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (action == NULL || array == NULL)
		return;
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
