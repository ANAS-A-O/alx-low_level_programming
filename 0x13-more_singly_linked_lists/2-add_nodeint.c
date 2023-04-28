#include "lists.h"

/**
  *add_nodeint - add a node to the start of list
  *@head : double pointer to the list
  *@n : the int data of the starting node
  *Return: adresse or NULL
  **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	start = malloc(sizeof(listint_t));

	if (start == NULL)
		return (NULL);
	start->n = n;
	start->next = *head;
	*head = start;

	return (*head);
}


