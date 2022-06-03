#include <stdio.h>
/**
 * main - entry point
 * Description: print numbers of base 16 followed by
 * new line
 * return: 0
 */
int main(void)
{
	int i, y;
	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}
	for (y = 'a'; y <= 'f'
			; y++)
	{
		putchar (y);
	}

	putchar('\n');
	return (0);
}
