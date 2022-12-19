/**
 * swap_int - swap values of two integers
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
