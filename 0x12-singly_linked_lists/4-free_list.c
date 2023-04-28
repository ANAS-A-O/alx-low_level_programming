#include <stdlib.h>
#include "lists.h"
/**
* free_list - cette fonction free la list aves ses elements
* @head: c' est un pointeur de la list
*/
void free_list(list_t *head)
{
	list_t *rm;

	while (head != NULL)
	{
		rm = head->next;
		free(head->str);
		free(head);
		head = rm;
	}
}
