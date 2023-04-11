#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *copystr;

	int n;

	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}

	copystr = malloc(sizeof(char) * (i + 1));

	if (copystr == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
	{
		copystr[n] = str[n];
	}
	return (copystr);
}



