#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @c: string input
* Return: character pointer
*/

char *cap_string(char *c)
{
	int i, w = 0, p, j;
	char str[] = " \t\n,;.!?\"(){}";

	for (i = 0; *(c + i); i++)
	{
		p = *(c + i);
		for (j = 0; *(str + j); j++)
		{
			if (p == *(str + j))
			{
				j = -1;
				break;
			}
		}
		if (j == -1)
		{
			w = 1;
			continue;
		}
		if (p > 96 && p < 124 && w)
			*(c + i) -= 32;
		w = 0;
	}
	return (c);
}
