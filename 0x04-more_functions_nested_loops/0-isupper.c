#include "main.h"

/**
* _isupper - checks if a letter is upper case or not
* @c: numerical input
* Return: 1 if uppercase and 0 otherwise
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
