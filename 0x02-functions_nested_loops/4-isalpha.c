#include "main.h"

/**
 * _isalpha - identify alphaets
 *
 * @c: ASCII code
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
