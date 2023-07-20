#include "main.h"

/**
 * more_numbers - print mare nums
 */
void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = '0'; m < '15'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
		
	}
}
