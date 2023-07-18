#include "main.h"

/**
 * jack_bauer - minutes of the day
 *
 * Return: no
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (a == 2 && b == 4)
						break;
					_putchar(a * 49);
					_putchar(b * 49);
					_putchar(58);
					_putchar(c * 49);
					_putchar(d * 49);
				}
			}
		}
	}
}
