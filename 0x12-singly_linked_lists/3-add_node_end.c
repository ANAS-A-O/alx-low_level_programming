#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - catte fonction ajoute un node a la fin de la list
* @head: c' est un double pointeur de la list
* @str: c' est une phrase
* Return: address ,  NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp = *head;
	int lenght = 0;

	while (str[lenght] != '\0')
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
