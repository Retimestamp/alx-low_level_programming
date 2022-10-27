#include "main.h"

/**
* leet - encodes a string into 1337
* @c: string input
* Return: character pointer
*/

char *leet(char *c)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; *(c + i); i++)
		for (j = 0; *(s1 + j); j++)
			if (*(c + i) == *(s1 + j))
				*(c + i) = *(s2 + j);
	return (c);
}
