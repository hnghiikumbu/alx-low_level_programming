/*
 * File: 101-quote.c
 * Auth: Brennan D Baraban
 */

#include <unistd.h>

/**
 * main - prints quote followed by a new line,to standard error
 *
 * Return: Always 1
 */

int main(void)
{
	write(2,
		"and that pieceof art is useful\" - Dora Korpar, 2015-10-19\n",
		59);

	return (1);
}
