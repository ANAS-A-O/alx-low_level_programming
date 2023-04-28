#include <stdio.h>
#include "lists.h"

/**
 * print_list - cette fonction print les elemnents de la single list
 * @h: cet le pointeur de la list
 * Return: lr retere est le nombre des nodes dans la list
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}




