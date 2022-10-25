#include "main.h"

/**
* _strcpy - copies one string to another
* @dest: character pointer input
* @src: string input
* Return: char pointer to new string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
