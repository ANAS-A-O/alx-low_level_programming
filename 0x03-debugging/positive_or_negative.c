#include "main.h"
/**
* positive_or_negative - see if a given number positive or negative
*
* @i: the number to check
*/

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is positive\n", i);
}
