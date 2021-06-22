#include "holberton.h"

/**
 * powB - raises the number base to power power
 * @base : the base
 * @power : the power
 * Return: return the power
 */
int powB(int base, int power)
{
	int i, prod = 1;

	for (i = 0; i < power; i++)
	{
		prod = prod * base;
	}
	return (prod);
}

/**
 * numLength - return the length of the string
 * @num : operand number
 * Return: number of the digit
 *
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		/* code */
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * putnchar - Print a number of any digit
 * @num : takes the input number
 */

void putnchar(int num)
{

	int length = numLength(num), j = length - 1, k, tmp2, digit1;

	if (num == 0)
	{
		/* code */
		_putchar(48);
	}
	else
	{
		while (j >= 0)
		{
			/* code */
			if (num % powB(10, j) == 0 && j != 0)
			{
				/* code */
				_putchar(48 + num / powB(10, j));
				for (k = j; k > 0; k++)
				{
					/* code */
					_putchar(48);
				}
				j = -1;
			}
			else
			{
				digit1 = num / powB(10, j);
				_putchar(digit1 + 48);
				tmp2 = num;
				num -= powB(10, j) * digit1;
				if (numLength(tmp2) - numLength(num) == 2)
				{
					/* code */
					-putchar(48);
					j--;
				}
				j--;
			}
		}
	}
}

/**
 * print_times_table - prints multiplication for factor n
 * @n : interger n
 */

void print_times_table(int n)
{
	int i, j, product, m;

	if (n < 16 && n >= 0)
	{
		/* code */
		for (i = 0; i <= n; i++)
		{
			/* code */
			for (j = 0; j <= n; j++)
			{
				/* code */
				product = i * j;
				putnchar(product);
				if (j != n)
				{
					/* code */
					_putchar(',');
					for (m = 0; m < 4 - numLength(i * (j + 1)); m++)
					{
						/* code */
						_putchar(' ');
					}
				}
				_putchar('\n');
			}
		}
	}
}
