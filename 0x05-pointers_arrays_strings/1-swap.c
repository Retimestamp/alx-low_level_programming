#include "main.h"

/**
* swap_int - swaps the values of two ints
* @a: numerical pointer input
* @b: second numerical pointer input
* Return: void
*/

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
