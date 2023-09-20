#include "main.h"
/**
 * _printf - function to print message to standard output
 * @format: first argument
 * @... : users argument
 * Return: Returns a count value
 */
int _printf(const char *format, ...)
{
	int count, i;

	va_list args;

	va_start(args, format);
	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;
				case 's':
					count += print_str(va_arg(args, char *));
					break;
				case 'd':
					count += print_int(va_arg(args, int));
					break;
				case '%':
					count += print_percent();
					break;
				default:
					count += print_percent();
					count += print_char(format[i]);
					break;
			}
		}
		else
		{
			count += print_char(format[i]);
		}
	}

	va_end(args);
	return (count);
}
