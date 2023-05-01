#include "lists.h"
/**
  *reverse_listint - reverse the list
  *@head: pointer to the list
  *Return: a reverse list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *avant = NULL;
	listint_t *apres = NULL;

	while (*head != NULL)
	{
		apres = (*head)->next;
		(*head)->next = avant;
		avant = *head;
		*head = apres;
	}
	*head = avant;
	return (*head);
}

