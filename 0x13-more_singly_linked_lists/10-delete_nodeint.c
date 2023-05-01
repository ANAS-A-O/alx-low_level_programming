#include "lists.h"
/**
  *delete_nodeint_at_index - efface un node d'une pos donnée
  *@head: double pointeur de la list
  *@index: la postion du node effacé
  *Return: 1 or -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *avant = *head;

	listint_t *ptr = *head;

	unsigned int num;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(ptr);
		return (1);
	}
	ptr = ptr->next;
	for (num = 1; ptr && num <= index; num++)
	{
		if (num == index)
		{
			avant->next = ptr->next;
			free(ptr);
			return (1);
		}
		else
		{
			avant = ptr;
			ptr = ptr->next;
		}
	}
	return (-1);
}
