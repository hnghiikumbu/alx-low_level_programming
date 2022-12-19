#include"main.h"

/**
 * print_rev - prints a string in rverse
 *
 * @s: string input
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int index;

	/*find length of string*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*print reverse*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
