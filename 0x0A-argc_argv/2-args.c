#include <stdio.h>
/**
 * main - this prints all of the arguments it receives.
 * @argv: arguments
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)

		printf("%s\n", argv[a]);

	return (0);
}
