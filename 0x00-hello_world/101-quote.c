#include <stdio.h>

/**
* main - main function
* Return: 0 on success
*/


int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(&s, 59, 1, stderr);
	return (1);
}
