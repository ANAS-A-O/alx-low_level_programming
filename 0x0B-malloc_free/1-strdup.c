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

	int i, n;

	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[n] != '\0')
	{
		len++;
		n++;
	}

	copystr = malloc(sizeof(char) * (len + 1));

	if (copystr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		copystr[i] = str[i];
	}
	return (copystr);
}



