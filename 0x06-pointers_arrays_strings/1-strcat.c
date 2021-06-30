#include "holberton.h"
#include <string.h>

/**
 *_strncat - concantenates two strings
 *@dest: string 1
 *@src: string 2
 *@n: interger 
 *Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	`int len = str(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0'
	return (dest);
}
