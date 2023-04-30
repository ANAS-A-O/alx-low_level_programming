#include "lists.h"
/**
  *sum_listint - sum the data of all nodes
  *@head: pointer the list
  *Return: the sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
