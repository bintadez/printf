#include "main.h"
/**
 * handle_specifier - Helper function to handle format specifiers
 * @format: The format string
 * @args: The arguments list
 *
 * Return: The number of characters printed.
 */
int handle_specifier(const char *format, char **args)
{
	int printed_char = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(*args);
					printed_char++;
					break;
				case 's':
					printed_char += _puts((char *)*args);
					break;
				case '%':
					_putchar('%');
					printed_char++;
					break;
				case 'd':
				case 'i':
					printed_char += _putnum(*args);
					break;
				default:
					_putchar('%');
					_putchar(*format);
					printed_char += 2;
					break;
			}
			args++;
		}
		else
		{
			_putchar(*format);
			printed_char++;
		}
		format++;
	}
	return (printed_char);
}
