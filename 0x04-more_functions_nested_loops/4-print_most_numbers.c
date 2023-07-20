#include "main.h"

/**
 *print_most_numbers - print mosr nums
 *
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		lf(x == 50 || x == 52)
			continue;
		_putchar(x);
	}
	_putchar('\n');
}
