#include "lists.h"

/**
  *free_listint2 - free list
  *@head: double pointer to the list
  */
void free_listint2(listint_t **head)
{
	listint_t *freehead;

	if (head == NULL)
		return;
	while (*head)
	{
		freehead = (*head)->next;
		free(*head);
		*head = freehead;
	}
	*head = NULL;
}
