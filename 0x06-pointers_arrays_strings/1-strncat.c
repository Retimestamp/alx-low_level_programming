#include "main.h"

/**
* _strncat - concatenates the first string with the first n
* characters of the second string
* @dest: string input
* @src: string input
* @n: numeric input
* Return: pointer to string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr;

	for (i = 0; *(dest + i); i++)
		continue;
	ptr = dest + i;
	for (i = 0; i < n && *(src + i); i++)
		*(ptr + i) = *(src + i);
	return (dest);
}
