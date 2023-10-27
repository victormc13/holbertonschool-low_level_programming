#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: first string receive as parameter
 * @s2: second string receive as parameter
 * Return: @s1 and @s2 concatenated
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int length1 = 0;
	int length2 = 0;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}

	concat = malloc(length1 + length2 + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		concat[length1 + i] = s2[i];
	}

	concat[length1 + length2] = '\0';
	return (concat);
}

