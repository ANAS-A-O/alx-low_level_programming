#include "lists.h"
/**
  *get_nodeint_at_index - fonction get the node of a certain index
  *@head: pointer to the list
  *@index: the index of node
  *Return: the node at the index or NULL in the faild
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *nodeindex = head;

	while (nodeindex)
	{
		nodeindex = nodeindex->next;
		if (i == index)
		{
			return (nodeindex);
		}
		i++;
	}
	return (NULL);
}
