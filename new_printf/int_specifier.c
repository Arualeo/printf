
#include "main.h"

/**
 * print_int - int specifier
 * @num: argument to input
 * Return: Return count value
 */

int print_int(int num)
{
	int count, divisor, temp, digit; 
		
	count = 0;

	if (num < 0)
	{
		putchar('-');
		num = -num;
		count++;
	}

	divisor = 1;

	temp = num;

	while (temp > 9)
	{
		temp /= 10;
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = num / divisor;

		putchar('0' + digit);
		num %= divisor;
		divisor /= 10;
		count++;
	}

	return (count);
}
