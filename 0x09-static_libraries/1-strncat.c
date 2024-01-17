#include "main.h"

/**
 * _strncat - this concatenates two strings
 * @src: this is the source of strings
 * @dest: this is where the string ends
 * @n: The length of int
 * Return: this point to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[i + k] = src[k];
	}
	dest[i + k] = '\0';
	return (dest);
}
