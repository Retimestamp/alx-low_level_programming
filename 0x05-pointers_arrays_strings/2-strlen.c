#include "main.h"

/**
* _strlen - finds the length of a given string
* @s: character pointer input
* Return: length of the given string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		i = i;
	return (i);
}
