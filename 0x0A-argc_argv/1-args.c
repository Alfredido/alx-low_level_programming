#include <stdio.h>

/**
 * main - prints program name
 * @argc: no of args
 * @argv: pointer to arguments
 *
 * Return: 0 at exit
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
