#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char  alphaZ;

	for (alphaZ = 'a'; alphaZ <= 'z'; alphaZ++)
	{
	putchar(alphaZ);
	}
	for (alphaZ = 'A'; alphaZ <= 'Z'; alphaZ++)
	{
	putchar(alphaZ);
	}
	putchar('\n');
	return (0);
}
