#include "main.h"
/**
 * _isdigit - this checks for a digit (0 through 9)
 *
 * @c: this is a character to be checked
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
