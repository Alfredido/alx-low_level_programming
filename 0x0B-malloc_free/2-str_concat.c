#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s3 = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	strcpy(s3, s1);
	strcat(s3, s2);

	return (s3);
}
