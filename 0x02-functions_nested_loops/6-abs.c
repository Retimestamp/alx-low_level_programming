#include "main.h"

/**
* _abs - returns the absolute value of a number
* @n: numeric input
* Return: returns the absolute value of the input
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
