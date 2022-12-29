#include "main.h"

/**
 * print_sign - print number sign
 * @n: sign numer
 *
 * Return: 1 number greater than zero
 *         0 number if zero
 *         -1 number less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
