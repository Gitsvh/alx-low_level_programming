#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: A pointer to a first string to be compared.
 * @s2: A pointer to a second string to be compared.
 * Return: if str1 < str2 a negative difference of a first unmatched character
 * if stri1 == str2,0.
 * if str1 > str2, the positive difference of the first unmatched characters.
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
