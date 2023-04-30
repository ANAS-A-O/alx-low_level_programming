#include "lists.h"
/**
*pop_listint - fonction free head and return n
*@head: double pointer to the list
*Return: data or 0
*/
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	pop = (*head)->next;
	free(*head);
	*head = pop;
	return (data);
}


