#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end
* @head: double pointer
* @str: string to put in the new node
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp = *head;
	unsigned int lenght = 0;

	while (str[lenght])
	lenght++;

	end = malloc(sizeof(list_t));
	if (end == NULL)
	return (NULL);

	end->str = strdup(str);
	end->len = lenght;
	end->next = NULL;

	if (*head == NULL)
	{
	*head = end;
	return (end);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = end;

	return (end);
}
