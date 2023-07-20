#include "main.h"

/**
 * print_triangle - print triangle
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
