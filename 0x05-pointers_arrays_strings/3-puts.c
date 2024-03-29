#include "main.h"

/**
 * _puts - print string, new line to stdout
 *
 * @str: string to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
