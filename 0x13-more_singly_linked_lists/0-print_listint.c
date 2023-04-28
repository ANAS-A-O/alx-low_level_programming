#include "lists.h"
/**
* print_listint - cette fonction print touts les elements de la list
* @h: le pointeur de la list
* Return: le nombre des nodes de la list
*/
size_t print_listint(const listint_t *h)
{
	int node_num = 0;

	while (h)
	{
		node_num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_num);
}
