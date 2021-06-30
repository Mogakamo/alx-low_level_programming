#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @a2: string 2
 * Return: 1 or 0
 */.
int _strcmp(char *s1, char *s2)
{
	int isEqual = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			isEqual = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (isEqual);
}
