/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 *
 * @src: pointer to source input buffer
 *
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* iterate through src array*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/*check if length (i) less than n*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
