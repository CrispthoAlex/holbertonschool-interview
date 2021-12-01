#include "holberton.h"


/**
 * wildcmp - wildcard pattern matching.
 * @s1: Input string
 * @s2: Pattern string
 * Return: strings could be identical, returns 1. Otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (!*s2);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}


