#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char reve;

	for (reve = 'z'; reve >= 'a'; reve--)
	{
		putchar(reve);
	}
	putchar('\n');
	return (0);
}
