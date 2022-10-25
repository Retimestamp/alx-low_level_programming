#include "main.h"

/**
* rev_string - reverses a string
* @s: string input
* Return: void
*/

void rev_string(char *s)
{
	int i, j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		i = i;
	i--;
	while (s + j <= s + i)
	{
		int c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		i--, j++;
	}
}
