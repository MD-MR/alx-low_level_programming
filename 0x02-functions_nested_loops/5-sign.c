#include "main.h"

/**
 * print_sign - gives sign of numbers
 *
 * @n: input number
 *
 * Return: 1 for positive 0 for 0 else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
