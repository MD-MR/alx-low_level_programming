#include "main.h"

/**
 * print_last_digit - identify the last digit of a number
 *
 * @y: number
 *
 * Return: last digit
 */
int print_last_digit(int y)
{
	int i = y % 10;

	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
