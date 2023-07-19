#include "main.h"

/**
 * times_table - displays times table
 *
 * Return: no
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;

			if ((z / 10) == 0)
			{
				if (y != 0)
					_putchar(' ');
				_putchar(z + 48);

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
