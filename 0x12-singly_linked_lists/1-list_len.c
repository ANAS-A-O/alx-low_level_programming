#include <stdlib.h>
#include "lists.h"
/**
 * list_len - cette fonction print le nombre des nodes dans une list donnée
 * @h: c'est le pointeur de la list
 * Return: le nombre des node dans la list
 */
size_t list_len(const list_t *h)
{
	int lenght = 0;

	while (h)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
