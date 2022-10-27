#include "main.h"

/**
* rot13 - encodes a string into 1337
* @c: string input
* Return: character pointer
*/

char *rot13(char *c)
{
	int i, j;
	char s1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVxXwWyYzZ";
	char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; *(s1 + j); j++)
		{
			if (*(c + i) == *(s1 + j))
			{
				*(c + i) = *(s2 + j);
				break;
			}
		}
	}
	return (c);
}
