#include "main.h"

/**
 * _islower - checks if lower case is prsent
 *
 * @c: the character in ASCII code
 *
 * Return: Always 1 for lowercase 0 else
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
