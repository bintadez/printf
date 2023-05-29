#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
*/
int _printf(const char *format, ...)
{
	int i, n = 0, printed_chars = 0;
	char c, *string;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			printed_chars++;
		}
		else if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(list, int);
					_putchar(c);
					printed_chars++;
					break;
				case 's':
					string = va_arg(list, char*);
					for (n = 0; string && string[n] != '\0'; n++)
					{
						write(1, &string[n], 1);
						printed_chars++;
					}
					break;
				case '%':
					_putchar('%');
					printed_chars++;
					break;
			}
		}
	}
	va_end(list);
	return (printed_chars);
}
