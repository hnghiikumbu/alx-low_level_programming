#include <stdio.h>
/**
 * main - main block
 * Description: print alphabet in lowercase and then in uppercase followed by a new line
 * return: 0
 */
int main(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
