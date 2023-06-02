#include "main.h"
/**
 * _printf - Prints a formatted output to stdout
 * @format: The format string
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int temp, i = 0, printed_char = 0;

	va_start(list, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')/*checking if there is a specifier*/
		{
			i++; /*skip to the next character*/
			switch (format[i])
			{
				case 'c':
					temp = _printchar(va_arg(list, int));
					printed_char += temp;
					break;
				case 's':
					temp = _printstr(va_arg(list, char *));
					printed_char += temp;
					break;
				case '%':
					temp = _printcent();
					printed_char += temp;
					break;
				case 'd':
				case 'i':
					temp = _printnum(va_arg(list, int));
					printed_char += temp;
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			printed_char++;
		}
		i++;
	}
	va_end(list);
	return (printed_char);
}

