#include <stdio.h>
/**
 * _isalpha - checklower case letter
 * @c : character to check 
 * Return 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
