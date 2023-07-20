#include "main.h"

/**
* _isupper - identify uppercase
*
* @c: letter input
*
* Return: 1 for upper else 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
