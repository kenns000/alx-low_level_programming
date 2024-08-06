#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;

    if (b == NULL)
        return (0);

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
        num = num * 2 + (b[i] - '0');
    }

    return (num);
}

