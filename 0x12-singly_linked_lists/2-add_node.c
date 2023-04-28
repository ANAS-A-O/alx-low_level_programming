#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - la foncio ajoute un node au debut de la list
* @head: c'est un double pointeur de la list
* @str: la phrase
* Return: l' adresse ou NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *beg;
	int lenght = 0;

	while (str[lenght] != '\0')
	lenght++;

	beg = malloc(sizeof(list_t));

	if (beg == NULL)
	return (NULL);

	beg->str = strdup(str);
	beg->len = lenght;
	beg->next = (*head);
	(*head) = beg;

	return (*head);
}
