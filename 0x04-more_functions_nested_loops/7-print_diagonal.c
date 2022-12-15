#include"main.h"

/**
 * print_diagonal - diagonal line
 *
 * @n: number of times diagonal line should printed
 *
 */
void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; ++postn)
		{
			for (space = 1; space <= postn; ++space)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
