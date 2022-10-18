#include "main.h"

/**
*_isalpha - determines if a value is alphabetic
* @c: can be a char
* Return: 1 if alphabetic and 0 if not
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
