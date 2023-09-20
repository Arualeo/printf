#include <stdio.h>
#include "main.h"

/**
 * print_str - character specifier
 * @str: argument to enter
 * Return: Return a string
 */


int print_str(char *str)
{
	int count = 0;

	while (*str)
	{
		count += putchar(*str);
		str++;
	}
	return (count);
}

