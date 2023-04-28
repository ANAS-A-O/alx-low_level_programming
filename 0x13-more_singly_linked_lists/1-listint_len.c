#include "lists.h"
/**
*listint_len - cette fonction compte le nombre des nodes dans une list donnée
*@h: c'est un pointeur de la list
*Return: le nombre des nodes dans la liste
**/
size_t listint_len(const listint_t *h)
{
	int lenght = 0;

	while (h)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
