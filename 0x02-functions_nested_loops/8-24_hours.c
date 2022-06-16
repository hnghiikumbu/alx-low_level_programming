#include <stdio.h>
/**
 * jack-bauer - print every minute of the day of bauer
 * return: void
 */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;
	int a = 9;

	h2 = 0;
	while (h2 <= 2)
	{
		if (h2 == 2) 
		{
			a = 3;
		}
		h1 = 0;
		while (h1 <= a)
		{
			m2 = 0;
			while (m2 <= 5)
			{
				m1 = 0;
				while (m1 <= 9)
				{
					putchar('0' + h2);
					putchar('0' + h1);
					putchar(':');
					putchar('0' + m2);
					putchar('0' + m1);
					putchar('\n');
					m1++;
				}
				m2++;
			}
			h1++;
		}
		h2++;
	}
}
