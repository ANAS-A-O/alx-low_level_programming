#include "lists.h"

/**
  *free_listint - free a list
  *@head: a pointer to the list
  */
void free_listint(listint_t *head)
{
	listint_t *freehead;

	while (head)
	{
		freehead = head->next;
		free(head);
		head = freehead;
	}
}
