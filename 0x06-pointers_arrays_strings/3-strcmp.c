#include "main.h"

/**
* _strcmp - compares the first string with the second
* @s1: string input
* @s2: string input
* Return: s1 - s2
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s1 + i) && *(s2 + i); i++)
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
	return (0);
}
