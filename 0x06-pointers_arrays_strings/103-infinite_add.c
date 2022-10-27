#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: numeric input
* @n2: numeric input
* @r: output buffer
* @size_r: numeric input for buffer size
* Return: character pointer
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, k, i2, i3, cn1, cn2, cnr = 0, j, s = size_r;
	char b[1000];
	char *n, *c1, *c2;

	for (i = 0; i < size_r; i++)
		*(r + i) = 0;
	for (i = 0; *(n1 + i); i++)
		continue;
	for (i2 = 0; *(n2 + i2); i2++)
		continue;
	i3 = i - i2;
	if (i3 < 0)
		i3 = -i3, i = i2, n = n1;
	else
		 n = n2;
	for (k = 0; k < i3; k++)
		*(b + k) = 48;
	for (k = 0; *(n + k); k++)
		*(b + i3 + k) = *(n + k);
	if (n == n1)
		c1 = b, c2 = n2;
	else
		c2 = b, c1 = n1;
	for (j = 0, i--; i >= 0; i--, j++)
	{
		if (j >= s - 1 || (i == 0 && (cn1 + cn2 + cnr) >= 10 && j + 1 >= s - 1))
			return (0);
		cn1 = *(c1 + i) - '0', cn2 = *(c2 + i) - '0';
		*(r + j) = '0' + ((cn1 + cn2 + cnr) % 10);
		if (cn1 + cn2 + cnr >= 10)
			cnr = (cn1 + cn2 + cnr) / 10;
		else
			cnr = 0;
		if (i == 0 && cnr)
			*(r + j + 1) = '0' + cnr, j++;
	}
	for (i = 0, j--; r + i < r + j; j--, i++)
		cnr = *(r + i), *(r + i) = *(r + j), *(r + j) = cnr;
	return (r);
}
