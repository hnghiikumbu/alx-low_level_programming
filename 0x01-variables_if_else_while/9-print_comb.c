#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print possible combinations of single 
 * digit numbers separated by , followed by space
 * and printed in ascending order
 * return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
