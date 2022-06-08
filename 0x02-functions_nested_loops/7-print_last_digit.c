#include <stdio.h>
/**
 * print_last_digit - return last digit
 * @n : to check number
 * return 0 or1
 */

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
	}
	else
	{
		nv = n % 10;
	}
	putchar(nv + '0');
	      return (nv);
}
