# include "hello.h"

/**
 * main - entry point
 * Description: print out _putchar followed by new line
 * return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;
	while (i < 9)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);

}
