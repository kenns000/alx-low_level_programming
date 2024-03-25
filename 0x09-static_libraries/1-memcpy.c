#include "main.h"
/**
 *_memcpy - this a function that copies memory area
 *@dest: tis is the memory where is stored
 *@src:this is  memory where is copied
 *@n: this number of bytes
 *
 *Return: this a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;


	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
 
