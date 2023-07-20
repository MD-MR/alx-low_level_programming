#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: input
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int x, y;

		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				if (y == x)
					_putchar(92);
				else if (y < x)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
