#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a, b, c, n, m;

	n = size;
	m = 1;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b <= n - 2; b++)
		{
			_putchar(' ');
		}
		for (c = 0; c < m; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
		n--;
		m++;
	}
}
