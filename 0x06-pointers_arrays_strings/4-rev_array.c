#include "main.h"

/**
* reverse_array - reverses an array of integers
* @a: array input
* @n: numeric input
* Return: array
*/

void reverse_array(int *a, int n)
{
	int i, p;

	for (i = 0, n--; i < n; i++, n--)
	{
		p = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = p;
	}
}
