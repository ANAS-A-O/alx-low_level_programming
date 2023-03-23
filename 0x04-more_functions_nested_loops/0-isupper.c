#include "main.h"
/**
* _isupper(int c)- chek if c is upper
* @c: int for check
* Return: 0 if c is lower and 1 if c is upper.
*/
int _isupper(int c)
{
	int x;

	if (c >= 97 && c <= 122)
	{
		x = 0;
	}
	if (c >= 65 && c <= 90)
	{
		x = 1;
	}
	return (x);
}
