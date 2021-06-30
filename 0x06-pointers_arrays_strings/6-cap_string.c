#include "holberton.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 or 0
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);	
}

/**
 * isDelimiter - determines whether the ascii is a delimeter
 * @c: character
 * Return: 1 or 0
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);

	}
	return (0);
}

/**
 * cap_string - capitalize all words of a string
 * @s: input string
 * Return: string with capitalised words
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0
		s++;
	}
	return (ptr);
}
