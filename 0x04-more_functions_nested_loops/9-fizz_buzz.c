#include "main.h"
#include <stdio.h>
/**
 * main - print numbers 1 - 100 with new line
 *        multiple of 3 print fizz
 *        multiple of 5 print buzz
 *        multiple of 3 and 5 print fizzbuzz
 *        number and word separated by space
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
