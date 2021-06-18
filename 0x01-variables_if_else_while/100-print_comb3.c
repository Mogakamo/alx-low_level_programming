#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; j < 58; j++)
	{
		for (j = i; j < 58; j++)
		{	
		if (i == j)
		{
			continue;
		}

		putchar(i);
		putchar(j);

		if (i == 56 && j == 57)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	    }
	}
	putchar('\n');
	return (0);
}
