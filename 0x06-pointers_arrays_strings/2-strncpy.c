#include "main.h"

/**
* _strncpy - copies the first n characters of the second string
* to the first string
* @dest: string input
* @src: string input
* @n: numeric input
* Return: pointer to string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, e = 0;

	for (i = 0; i < n; i++)
	{
		if (*(src + i) == 0)
			e = 1;
		if (e)
			*(dest + i) = 0;
		else
			*(dest + i) = *(src + i);
	}
	return (dest);
}
