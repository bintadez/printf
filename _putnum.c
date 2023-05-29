#include "main.h"
/**
 * _putnum - Prints an integer to stdout
 * @num: The integer to be printed
 *
 * Return: The number of characters printed.
 */
int _putnum(int num)
{
	int printed_char = 0;
	unsigned int n;

	if (num < 0)
	{
		_putchar('-');
		printed_char++;
		n = -num;
	}
	else
	{
		n = num;
	}

	if (n >= 10)
	{
		printed_char += _putnum(n / 10);
		printed_char += _putnum(n % 10);
	}
	else
	{
		_putchar('0' + n);
		printed_char++;
	}

	return (printed_char);
}

