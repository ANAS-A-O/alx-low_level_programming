#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
*
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *str;

unsigned int a = 0, b = 0, lenght1 = 0, lenght2 = 0;

while (s1 && s1[lenght1])
lenght1++;

while (s2 && s2[lenght2])
lenght2++;
if (n < lenght2)
str = malloc(sizeof(char) * (lenght1 + n + 1));
else
str = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

if (!str)
return (NULL);

while (a < lenght1)
{
str[a] = s1[a];
a++;
}
while (n < lenght2 && a < (lenght1 + n))
str[a++] = s2[b++];
while (n >= lenght2 && a < (lenght1 + lenght2))
str[a++] = s2[b++];
str[a] = '\0';
return (str);
}

