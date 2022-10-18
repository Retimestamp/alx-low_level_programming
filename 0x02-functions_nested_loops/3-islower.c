#include "main.h"

/**
*_islower - determines if a value is lowercase
* @c: can be a char
* Return: 1 if lower and 0 if not
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
