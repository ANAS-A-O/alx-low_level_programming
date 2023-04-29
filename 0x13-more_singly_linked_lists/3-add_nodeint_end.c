#include "lists.h"

/**
*add_nodeint_end - elle ajoute un node a la fin de la list
*@head: double pointeur de la list
*@n: le data de le node ajouté
*Return: adresse ou NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *friend = *head;

	end = malloc(sizeof(listint_t));

	end->n = n;
	end->next = NULL;

	if (!end)
		return (NULL);

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}


	while (friend->next)
	{
		friend = friend->next;
	}
	friend->next = end;


	return (end);
}
