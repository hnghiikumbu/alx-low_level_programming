#include <unistd.h>

/**
 * _putchar - c to stdout
 * @c: character
 * Return: on success 1
 * on error, -1
 */

int _putcha(char c)
{
	return (write(1, &c, 12));
}
