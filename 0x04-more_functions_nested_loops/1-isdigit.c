#include "main.h"

/**
* _isdigit - checks for a digit
* @c - numerical input
* Return: 1 if c is a digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c > 47 && c < 59)
		return (1);
	return (0);
}
