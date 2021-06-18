#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 1 last digit.
 * Return: 0 Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	lastDigit = n % 10;
	printf("Last digit of %i is %i and is ", n, lastDigit);
	if (n > 5)
		printf("greater than 5\n");
	else if (n == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}

