#include <stdio.h>
/**
 * print_alphabet - entry point
 * Description: print out alphabet
 * return: 0
 */
void print_aplhabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	
	putchar('\n');
}
