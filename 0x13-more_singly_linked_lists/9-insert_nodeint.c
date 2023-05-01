#include "lists.h"
/**
*insert_nodeint_at_index - insert a node in a certain position
*@head: double pointer to the list
*@idx: the position
*@n: the data of the node
*Return: the node or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *sizeptr = *head;

	unsigned int num;
	listint_t *indexptr;

	indexptr = malloc(sizeof(listint_t));

	if (head == NULL || indexptr == NULL)
	return (NULL);

	indexptr->n = n;

	indexptr->next = NULL;


	if (idx == 0)
	{
		indexptr->next = *head;
		*head = indexptr;
		return (indexptr);
	}
	for (num = 0; sizeptr && num < idx; num++)
	{
		if (num == idx - 1)
		{
			indexptr->next = sizeptr->next;
			sizeptr->next = indexptr;
			return (indexptr);
		}
		else
			sizeptr = sizeptr->next;
	}
	return (NULL);
}
