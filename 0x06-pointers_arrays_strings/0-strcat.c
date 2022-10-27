#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string input
* @src: string input
* Return: pointer to string
*/

char *_strcat(char *dest, char *src)
{
	int i;
	char *ptr;

	for (i = 0; *(dest + i); i++)
		continue;
	ptr = dest + i;
	for (i = 0; *(src + i); i++)
		*(ptr + i) = *(src + i);
	return (dest);
}
