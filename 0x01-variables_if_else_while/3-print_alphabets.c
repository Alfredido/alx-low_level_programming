#include <stdio.h>

/**
 *  * main - prints letters from a-z in lowercase and then uppercase
 *   * Return: return 0
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
