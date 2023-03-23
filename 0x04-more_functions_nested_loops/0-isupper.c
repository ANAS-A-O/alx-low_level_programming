#include "main.h"
/**
* _isupper(int c)- chek if c is upper
* @c: int for check
* Return: 0 if c is lower and 1 if c is upper.
*/
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
