/**
 * _strlen -return string lenth
 *
 * @s: string input
 *
 * Return:string length
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
